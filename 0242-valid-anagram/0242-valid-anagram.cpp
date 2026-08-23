class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.size();
        int m = t.size();
    
        if(n != m) return false;

        map<char, int> mp1, mp2;
        for(int i = 0; i<n; i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        for(int i = 'a'; i<= 'z'; i++)
        {
            if(mp1[i] != mp2[i]) {return false;}
        }

        
        return true;
        
        
    }
};