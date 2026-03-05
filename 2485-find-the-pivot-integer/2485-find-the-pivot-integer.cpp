class Solution {
public:
    int pivotInteger(int n) {

        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
           sum += i;
        }

        int ls = 0, rs = 0;

        for(int i = 1; i<=n; i++)
        {
           ls += i;
           rs = sum + i - ls;

           if(ls == rs) return i;
        }

        cout << -1 << endl;

        return -1;
        
    } 
};