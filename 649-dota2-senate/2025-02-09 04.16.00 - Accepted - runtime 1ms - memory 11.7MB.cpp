class Solution {
public:
    string predictPartyVictory(string s) {
    queue<int> q1,q2;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
          q1.push(i);
        }
        else q2.push(i);
    }
        while(!q1.empty()&&!q2.empty()){
            int r=q1.front();
            int l=q2.front();
            if(r<l){
            q1.pop();
            q2.pop();
            q1.push(r+s.size());
            }
            else{ 
            q2.pop();
            q1.pop();
            q2.push(l+s.size());
            }
        }
       if(q1.empty()) return "Dire";
       else return "Radiant";
    }
};