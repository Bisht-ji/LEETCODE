class Solution {
public:
    int reverse(int x) {
        long long ans=0, p,a;
        p = x;
        while(x!= 0){
            a = x%10;
            if ((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
                return 0;
            }
            ans = (ans*10)+a;
            x = x/10;
        }
        
        
        return ans;
    
    }
};