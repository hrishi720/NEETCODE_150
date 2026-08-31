class Solution {
public:

    bool isValid(vector<vector<int>> grid , int i , int j , int n , int k){

        if(i<0 || j<0 || i>=n || j>=n || grid[i][j]!=k){
            return false;
        }

         if(k==n*n-1){
            return true;
        }

        bool travel = isValid(grid , i-2 , j+1 , n , k+1) || isValid(grid , i-1 , j+2 , n , k+1) || isValid(grid , i-2 , j-1 , n , k+1) || isValid(grid , i-1 , j-2 , n , k+1) || isValid(grid , i+2 , j+1 , n , k+1) || isValid(grid , i+1 , j+2 , n , k+1) || isValid(grid , i+2 , j-1 , n , k+1) || isValid(grid , i+1 , j-2 , n , k+1);

        return travel ;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        return isValid(grid , 0 , 0 , n , 0);
    }
};