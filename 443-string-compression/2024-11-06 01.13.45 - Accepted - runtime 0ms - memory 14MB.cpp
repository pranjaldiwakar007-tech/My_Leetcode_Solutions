class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int index=0;
        while(i<n){
            char cur=chars[i];
            int cnt=0;
           while(i<n && cur==chars[i] ){
                cnt++;
                i++;
            }
            chars[index]=cur;
            index++;
            if(cnt>1){
            for(auto it:to_string(cnt)){
                chars[index]=it;
                index++;
            } 
            }
        }
        return index;
    }
};