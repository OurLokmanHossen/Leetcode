class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        while(k--)
        {
            int mi = INT_MAX;
            int mPos = -1;
            for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] < mi)
            {
                mi = nums[i];
                mPos = i;

            }
        }

        nums[mPos] = nums[mPos] * multiplier; 
        
        }

        return nums;


        
    }
};