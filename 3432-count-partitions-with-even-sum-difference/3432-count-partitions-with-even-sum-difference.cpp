class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int n = nums.size();
        int cnt = 0, sum = 0, ls = 0;

        for(int i = 0; i<n; i++){
            sum += nums[i];
        }
        for(int i = 0; i<n-1; i++)
        {
              ls += nums[i];

              int rs = sum - ls;

              if(rs % 2 == ls % 2) cnt++;
            
        }

        return cnt ;
        
    }
};