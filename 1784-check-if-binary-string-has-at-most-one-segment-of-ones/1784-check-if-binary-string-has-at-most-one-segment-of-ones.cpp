class Solution {
public:
    bool checkOnesSegment(string s) {

       int n = s.size();

        bool found = true;

        for(int i = 0; i<n-1; i++)
        {
            if(s[i] == '0' & s[i+1] == '1')
            {
                found = false;
                break;
            }
        }
        if(found) return true;
        else return false;
        
    }
};