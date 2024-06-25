#include<stack>
#include<iostream>
using namespace std;

int prec(char c)
{
    if (c == '+' || c == '-')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtoprefix(string s)
{
    stack<char> st;
    string res;
    s.reserve();
    for(int i=0;i<=s.length();i++)
    {
        
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
     
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    res.reserve();

    return res;

}

int main()
{
    cout<<infixtoprefix("(a-b/c)*(a/k-l)");

    return 0;
}