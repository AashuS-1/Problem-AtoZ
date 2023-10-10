class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x !=0){
            int dig = x%10;
            ans = (ans *10) + dig;
            x = x/10;

        }
        return ans;
    }
};
