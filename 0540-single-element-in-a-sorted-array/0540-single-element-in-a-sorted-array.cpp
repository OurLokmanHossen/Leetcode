class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;

        for(auto it : nums)
        {
            ans ^= it;
        }

        return ans;

    }
};