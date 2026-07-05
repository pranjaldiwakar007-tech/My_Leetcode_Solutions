class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int cnt=0;
        sort(target.begin(),target.end());

        sort(arr.begin(),arr.end());
        for(int i=0;i<target.size();i++)
        {
            if(arr[i]==target[i])
            {
            cnt++;
            continue;
            }
            else
            {
                return false;
                break;
            }
         
        }
         return true;
    }
  
};