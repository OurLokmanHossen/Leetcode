class Solution {
public:
    int pivotInteger(int n) {

        for(int x = 1; x <= n; x++)
        {
            int ls = 0, rs = 0;

            for(int i = 1; i<= x; i++)
            {
                ls += i;
            }

            for(int i = x; i<= n; i++)
            {
                rs += i;
            }

            if(ls == rs)
            {
               return x;
            }
        }

        return -1;
        
    } 
};