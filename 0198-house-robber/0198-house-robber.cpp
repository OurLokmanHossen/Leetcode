class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size(); 

        vector<int> dp(n);

        if(n == 1) return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        int mx = 0;

        for(int i = 2; i<n; i++)
        {
           int skip = dp[i-1];
           int rob = nums[i] + dp[i-2];
           dp[i] = max(skip, rob);

        }

        return dp[n-1];

        
        
    }
};