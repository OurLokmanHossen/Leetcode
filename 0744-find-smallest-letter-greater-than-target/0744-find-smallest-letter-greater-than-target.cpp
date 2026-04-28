class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();

        int l = 0, e = n - 1;

        int ans = letters[0];
        while(l <= e)
        {
           int mid = l + (e-l) / 2;
           if(letters[mid] > target)
           {
              ans = letters[mid];
              e = mid - 1;
           }else l = mid + 1;
        }return ans;


        
    }
};