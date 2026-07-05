class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generator(i));
        }
        return ans;
    }
    vector<int>generator(int i){
        vector<int>temp;
        temp.push_back(1);
        int res=1;
        for(int c=1;c<i;c++){
          res=res*(i-c);
            res=res/(c);
            temp.push_back(res);
        }
        return temp;
    }
};