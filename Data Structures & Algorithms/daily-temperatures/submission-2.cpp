class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        vector<int> st;
        int n = tokens.size();
        for(int i = 0;i<n;i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int b = st.back();
                st.pop_back();
                int a = st.back();
                st.pop_back();
                if(tokens[i] == "+")
                {
                    st.push_back(a+b);
                }
                else if(tokens[i] == "-")
                {
                    st.push_back(a-b);
                }
                else if(tokens[i] == "*")
                {
                    st.push_back(a*b);
                }
                else if(tokens[i] == "/")
                {
                    st.push_back(a/b);
                }
            }
            else
            {
                st.push_back(stoi(tokens[i]));
            }
        }
        return st.back();

    }
};
