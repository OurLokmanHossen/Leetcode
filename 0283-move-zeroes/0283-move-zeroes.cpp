class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();

        vector<int> a;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                a.push_back(nums[i]);
            }else
            {
                cnt++;
            }
        }

        for(int i = 0; i<cnt; i++)
        {
            a.push_back(0);
        }

        nums = a;

        



        




        
    }
};