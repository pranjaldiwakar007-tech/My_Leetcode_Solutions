class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n=s.size();
        long long  size=0;
        string res;
        for(char &ch:s){
            if(isdigit(ch)){
                size=size*(ch-'0');
            }
            else size+=1;
        }
       for(int i=n-1;i>-1;i--){
        k=k%size;
        if(isalpha(s[i])&& k==0 ) return string(1,s[i]);
        if(isalpha(s[i])) size-=1;
        else size/=s[i]-'0';
       }
       return "";
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
