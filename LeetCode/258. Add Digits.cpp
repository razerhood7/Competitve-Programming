class Solution {
public:
    int addDigits(int num) {
        
        int sum = 0;
        while(num)
        {
            int temp = num%10;
            sum+=temp;
            num = num/10;
        }
        
        if(sum<10)
            return sum;
        else
        return addDigits(sum);
    }
};
