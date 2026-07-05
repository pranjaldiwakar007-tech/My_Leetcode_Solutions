class Solution {
public:
int q[100000];
int back,front;
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.size();
        if(s[n-1]=='1') return false;
        front=back=0;
        q[back++]=0;
        int i=0;
        for(int far=0;front<back;far=max(far,i+maxJump)){
            i=q[front++];
            int j0=max(far+1,i+minJump);
            int jM=min(i+maxJump,n-1);
            for(int j=j0;j<=jM;j++){
                if(s[j]=='0'){
                    if(j==n-1) return true;
                    q[back++]=j;
                } 
            }
        }
        return false;
    }
};