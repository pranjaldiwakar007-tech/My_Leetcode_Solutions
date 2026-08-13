class Solution {
private:
    class SegmentTree {
    private:
        int n;
        vector<int> pre, suf, best;
        string s;
        void build(int node, int l, int r) {
            // Leaf node
            if (l == r) {
                pre[node] = 1;
                suf[node] = 1;
                best[node] = 1;
                return;
            }
            int mid = (l + r) >> 1;
            build(node << 1, l, mid);
            build(node << 1 | 1, mid + 1, r);
            pushUp(node, l, r);
        }

        void pushUp(int node, int l, int r) {
            int left = node << 1;
            int right = node << 1 | 1;

            int mid = (l + r) >> 1;

            int lenL = mid - l + 1;
            int lenR = r - mid;

            // Prefix initially comes from left child
            pre[node] = pre[left];

            // Suffix initially comes from right child
            suf[node] = suf[right];

            // Best answer initially comes from either child
            best[node] = max(best[left], best[right]);

            // Can the repeating sequence cross the boundary?
            if (s[mid] == s[mid + 1]) {

                // Entire left segment has the same character
                if (pre[left] == lenL) {
                    pre[node] = lenL + pre[right];
                }

                // Entire right segment has the same character
                if (suf[right] == lenR) {
                    suf[node] = lenR + suf[left];
                }

                // Combine suffix of left + prefix of right
                best[node] = max(
                    best[node],
                    suf[left] + pre[right]
                );
            }
        }

        void update(int node, int l, int r, int i) {
            // Reached the leaf
            if (l == r) {
                return;
            }

            int mid = (l + r) >> 1;

            if (i <= mid) {
                update(node << 1, l, mid, i);
            } else {
                update(node << 1 | 1, mid + 1, r, i);
            }

            // Recalculate this node
            pushUp(node, l, r);
        }

    public:
        SegmentTree(string str) {
            s = str;
            n = s.length();

            pre.resize(n << 2);
            suf.resize(n << 2);
            best.resize(n << 2);

            build(1, 0, n - 1);
        }

        void updateChar(char c, int i) {
            s[i] = c;
        }

        void update(int i) {
            update(1, 0, n - 1, i);
        }

        int getBest() {
            return best[1];
        }
    };

public:
    vector<int> longestRepeating(
        string s,
        string queryCharacters,
        vector<int>& queryIndices
    ) {
        int k = queryIndices.size();

        SegmentTree tree(s);

        vector<int> ans(k);

        for (int i = 0; i < k; i++) {
            int index = queryIndices[i];

            // Change the character
            tree.updateChar(
                queryCharacters[i],
                index
            );

            // Update the Segment Tree
            tree.update(index);

            // Root stores the answer for the entire string
            ans[i] = tree.getBest();
        }

        return ans;
    }
};