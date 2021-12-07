class Solution {
public:
    bool isPalindrome(int x) {
        string num=to_string(x);
        
        int j=num.size()-1;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]!=num[j])
            {
                return false;
                break;
            }
            else
                j--;
        }
        
        return true;
    }
};
