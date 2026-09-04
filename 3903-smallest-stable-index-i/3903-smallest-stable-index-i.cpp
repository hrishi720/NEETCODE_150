class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>s(n,0);
        int mn = INT_MAX;

        for(int i=n-1 ; i>=0;i--){
            mn= min(mn,nums[i]);
            s[i]=mn;
        }

        int maxx =INT_MIN;
        for(int i=0; i<n ; i++){
            maxx=max(maxx,nums[i]);
            int score = maxx-s[i];
            if(score<=k) return i;
        }

        return -1;
    }
};