class Solution {
public:
    bool isValid(string s) 
    {
        int n = s.length();
        char stack[n];
        int top = -1;
        for(int i = 0;i<n;i++)
        {
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                top++;
                stack[top] = s[i];
            }
            if(top == -1)
            {
                return false;
            }
            if(s[i] == ')')
            {
                if(stack[top] == '(')
                {
                    top--;
                }
                else
                {
                    return false;
                }
                
            }
            else if(s[i] == ']')
            {
                if(stack[top] == '[')
                {
                    top--;
                }
                else
                {
                    return false;
                }
                
            }
            else if(s[i] == '}')
            {
                if(stack[top] == '{')
                {
                    top--;
                }
                else
                {
                    return false;
                }
                
            }
            
            
            
        }
        if(top == -1)
        {
            return true;
        }
        return false;

    }
};
