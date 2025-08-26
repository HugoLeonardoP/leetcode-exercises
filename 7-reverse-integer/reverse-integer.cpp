//submitted on  May 07,2025
#include <limits>
class Solution {
public:
    int reverse(int x) {
        int s = 0;
        while(x){
            if(s>214748364 || s<-214748364) return 0;
            s*=10;
            s+=x%10;
            x/=10;

        }
        return s;
    }
};