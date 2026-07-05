
struct Node {
      Node * links[26];
      int prefix = 0;

      bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
      }
      Node * get(char ch) {
        return links[ch - 'a'];
      }
      void put(char ch, Node * node) {
        links[ch - 'a'] = node;
      }
      void incPrefix() {
        prefix++;
      }
      int getPrefix() {
        return prefix;
      }
    };

class Solution {
    
    private: Node *root;

    public:
    Solution() {
      root = new Node();
    }
    
    vector<int> sumPrefixScores(vector<string>& words) {
        int m = words.size();
        for(int j=0; j<m; j++) {
            string word = words[j];
            int n = word.length();
            Node *node = root;
            for (int i = 0; i < n; i++) {
              if (!node -> containsKey(word[i])) {
                node -> put(word[i], new Node());
              }
              node = node -> get(word[i]);
              node -> incPrefix();
            }
        }
        
        vector<int> ans;
        for(int j=0; j<m; j++) {
            string word = words[j];
            int n = word.length();
            Node *node = root;
            int temp = 0;
            for (int i = 0; i < word.length(); i++)  {
                if (node->containsKey(word[i])) {
                    temp += node -> getPrefix();
                    node = node->get(word[i]);
                }
            }
            temp += node -> getPrefix();
            ans.push_back(temp);
        }
        return ans;
    }
};