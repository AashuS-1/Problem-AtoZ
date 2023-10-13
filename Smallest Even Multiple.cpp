class Solution {
public:
    int smallestEvenMultiple(int n) {
        int count = 0;
        for(int i = 0;i<n;i++ )
        {
            if(n%2==0)
            {
                return n;
            }
            else
            {
                return n*2;
            }
        }
    }
};