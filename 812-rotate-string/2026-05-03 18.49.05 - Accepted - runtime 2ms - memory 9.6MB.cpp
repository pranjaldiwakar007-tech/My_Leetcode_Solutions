class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())return 0;
        int n = s.size();
        deque<char> d1,d2;
        for(auto ch:s)d1.push_back(ch);
        for(auto ch:goal)d2.push_back(ch);
        if(d1==d2)return 1;
        for(int i=n;i<2*n;i++){
            d2.push_back(goal[i%n]);
            d2.pop_front();
            if(d1==d2)return 1;
        }
        return 0;
    }
};