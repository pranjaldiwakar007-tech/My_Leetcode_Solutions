class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mpp(26,0);
        for(char &ch:tasks)
        mpp[ch-'A']++;
        int time=0;
        priority_queue<int> maxh;
        for(int i=0;i<26;i++){
        if(mpp[i]>0)
        maxh.push(mpp[i]);
        }
        while(!maxh.empty()){
        vector<int> temp;
           for(int i=1;i<=n+1;i++){
            if(!maxh.empty()){
            int freq=maxh.top();
            maxh.pop();
            freq--;
            temp.push_back(freq);
           }
        }
           for(int &f:temp){
            if(f>0) maxh.push(f);}
            if(maxh.empty())
             time+=temp.size();
            else time+=n+1;
        }
         return time;
    }
};