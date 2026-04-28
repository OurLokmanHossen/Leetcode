class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();

          auto up = upper_bound(letters.begin(), letters.end(), target);
        

        if(up == letters.end())
        {
            return letters[0];
        }

        return *up ;
        
    }
};