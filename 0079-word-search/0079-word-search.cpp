class Solution {
public:
    bool solve(vector<vector<char>>& board, string word, int i , int j , int k){
        if (k==word.size()){
            return true ;
        }

         if (i < 0 || i >= board.size() ||
            j < 0 || j >= board[0].size() ||
            board[i][j] != word[k]) {
                return false;
            }

        char original = board[i][j];
        board[i][j]='#';

        bool found = solve(board,word,i-1,j,k+1) || solve(board,word,i+1,j,k+1) || solve(board,word,i,j-1,k+1
        ) || solve(board,word,i,j+1,k+1) ;

        board[i][j]=original;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0 ; i<n; i++){
            for(int j=0; j<m ; j++){
                if(solve(board,word,i,j,0)){
                    return true;
                }
            }
        }

        return false;
    }
};