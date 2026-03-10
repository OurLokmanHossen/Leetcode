class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        vector<int> newA (2 * n);

        for(int i = 0;i<n; i++)
        {
             newA[i] = nums[i] ;
             newA[i + n] = nums[i];
        }

        return newA;

        
    }
};