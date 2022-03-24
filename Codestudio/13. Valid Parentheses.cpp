bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    
    for(int i=0;i < expression.size();i++)
    {
        char ch = expression[i];
        if(ch == '{' || ch == '[' ||ch == '(')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if((ch == '}' && top == '{') || (ch == ']' && top == '[') ||(ch == ')' && top == '('))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}
