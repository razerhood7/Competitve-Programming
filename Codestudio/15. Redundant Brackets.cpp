#include<stack>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(int i = 0;i<s.size();i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool isRed = true;
                while(st.top()!='(')
                {
                    char top = st.top();
                    if(top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRed = false;
                    }
                    st.pop();
                }
                if(isRed == true)
                    return true;
                st.pop();
            }         
        }
    }
    return false;
}
