class Solution {
public:
int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
    string intToRoman(int num) {
        string result="";
        vector<int> value{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> str{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<13;i++)
{
    int time=num/value[i];
    while(time--){
     result+=str[i];
    }
    num=num%value[i];
}
return result;        
    }
};