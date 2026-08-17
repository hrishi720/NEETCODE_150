class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n*n;
        int missing = -1 ; 
        int repeating = -1 ;
        
        vector<int>count(size+1,0);

        for(int i=0; i<n ; i++){
            for(int j=0; j<n; j++){
                count[grid[i][j]]++;
            }
        } 

        for (int i=1; i<=size;i++){
            if(count[i]==0){
                missing =i;
            }else if(count[i]==2){
                repeating = i;
            }
        }

        return {repeating , missing};
        
    }
};