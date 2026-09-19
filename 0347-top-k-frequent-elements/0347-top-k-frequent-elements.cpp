class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        for(auto it : nums)
        {
            mp[it]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x: mp)
        {
            pq.push({x.second, x.first});
        }
        
        vector<int> ans;
        while(k--)
        {
            auto y = pq.top();
            ans.push_back(y.second);
            pq.pop();
        }
        return ans;
        
    }
};