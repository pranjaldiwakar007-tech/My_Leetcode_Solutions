class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ld, vector<int>& wst, vector<int>& wd) {
        int mintime1=1e9,mintime2=1e9;
        for(int i=0;i<lst.size();i++){
            for(int j=0;j<wst.size();j++){
            int dd=lst[i]+ld[i];
            if(dd<=wst[j]){
                dd=wst[j]+wd[j];
            }
            else dd+=wd[j];
            mintime1=min(mintime1,dd);
            }
        }
         for(int i=0;i<wst.size();i++){
            for(int j=0;j<lst.size();j++){
            int dd=wst[i]+wd[i];
            if(dd<=lst[j]){
                dd=lst[j]+ld[j];
            }
            else dd+=ld[j];
            mintime2=min(mintime2,dd);
            }
        }
        int m=min(mintime1,mintime2);
        return m;
    }
};