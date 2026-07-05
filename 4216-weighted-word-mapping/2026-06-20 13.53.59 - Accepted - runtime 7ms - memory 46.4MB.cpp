class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size() ;

        unordered_map<char , int> m ;

        for(char ch = 'a' ; ch <= 'z' ; ch++){
            m[ch] = ch - 'a' ;
        }

        unordered_map<int ,char > mp ;

        for(int i=0 ; i < 26 ; i++ ){
            mp[i] = 'z' - i ;
        }

        string s = "" ;



        for(int i=0 ; i < n ; i++ ){
            string str = words[i] ;
            int weight = 0 ;
            for(int i=0 ; i < str.length() ; i++){
                char ch = str[i] ;
                int idx = m[ch] ;

                weight += weights[idx] ;
            }

            int res = weight % 26 ;

            s += mp[res] ;
        }
        return s ;
    }
};