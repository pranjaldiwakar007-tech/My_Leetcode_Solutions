class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        vector<bool>taken(instructions.size(),false);
        long long i=0,res=0;
        while(i>-1&&i<instructions.size()&&!taken[i]){
            taken[i]=true;
            if(instructions[i]=="add"){
                res+=values[i];
                i++;
            }
            else{
                i+=values[i];
            }
        }
        return res;
    }
};