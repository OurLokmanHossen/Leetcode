class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        int cnt1[26] = {0};
        int cnt2[26] = {0};

        for(int i = 0; i < s.size(); i++)
        {
            cnt1[s[i]- 'a']++;
            cnt2[t[i]- 'a']++;
        }

        for(int i = 0; i < 26; i++)
        {
            if(cnt1[i] != cnt2[i]) return false;
        }

        return true;
    }
};