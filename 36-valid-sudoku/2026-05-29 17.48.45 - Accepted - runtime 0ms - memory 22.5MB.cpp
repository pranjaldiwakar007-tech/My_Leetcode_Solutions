class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            vector<int>check(board.size()+1,0);
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    int x=board[i][j]-'0';
                    check[x]++;
                }
                else continue;
            }
            for(int k=0;k<check.size();k++){
                if(check[k]>1) return false;
            }
        }
    for(int j=0;j<9;j++){
    vector<int>check(board[0].size()+1,0);
    for(int i=0;i<9;i++){
        if(board[i][j]!='.'){
            int x=board[i][j]-'0';
            check[x]++;
        }
    }
    for(int k=1;k<=9;k++){
        if(check[k]>1) return false;
    }
}  
for(int row=0;row<9;row+=3){
    for(int col=0;col<9;col+=3){
        vector<int> check(board.size()+1,0);
        for(int i=row;i<row+3;i++){
            for(int j=col; j<col+3;j++){
                if(board[i][j]!='.'){
                    int x=board[i][j]-'0';
                    check[x]++;
                }
            }
        }
        for(int k=1;k<=9;k++){
            if(check[k]>1) return false;
        }
    }
}
        return true;
    }
};