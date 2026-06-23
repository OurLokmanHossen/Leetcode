class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        int o_cnt = 0, res = 0;
        mp[0] = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 1)
                o_cnt++;

            if(mp.count(o_cnt - k))
            {
                res += mp[o_cnt - k];
            }

            mp[o_cnt]++;
        }

        return res;
    }
};