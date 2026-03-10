class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        vector<int> newA (0);

        for(int i = 0;i<n; i++)
        {
            newA.push_back(nums[i]);
        }
        for(int i = 0;i<n; i++)
        {
            newA.push_back(nums[i]);
        }

        return newA;

        
    }
};