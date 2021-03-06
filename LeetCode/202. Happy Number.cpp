class Solution {
public:
    bool isHappy(int n) {
        
        int ans = 0;
        if(n>1 && n<7)
            return false;
        while(n>0)
        {
            int temp = n%10;
            ans += temp*temp;
            n = n/10;
        }
        
        if(ans == 1)
            return true;
        else{
             return isHappy(ans);
         }
    }
};
