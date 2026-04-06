class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long n = nums.size();

        int i = 0, j = 0;
        double s = 0, mx = -2e18;

        double avg = 0;

        while(j < n)
        {
            s+= nums[j];

            if(j-i+1 < k) j++;
            else if(j - i + 1 == k)
            {
                avg = s / k;
                mx = max(avg, mx);
                s -= nums[i];
                i++;
                j++;
            }
            
        }
        
        return mx;
    }
};