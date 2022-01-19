class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if (s.size() % 2 != 0) //if odd # of chars in string
            return false;

        for (int i = 0; i < s.size(); i++){            
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stk.push(s[i]);
            if (stk.empty())
                return false;
            else if (s[i] == ')'){
                if (stk.top() == '(')
                    stk.pop();
                else if (stk.top() != '(')
                    return false;
            }
            else if (s[i] == ']'){
                if (stk.top() == '[')
                    stk.pop();
                else if (stk.top() != '[')
                    return false;
            }
            else if (s[i] == '}'){
                if (stk.top() == '{')
                    stk.pop();
                else if (stk.top() != '{')
                    return false;
            }
        }
        
        if (stk.empty()) //if stack empty, we're good
            return true;
        return false;
    }
};
