#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n = s.length();
        int right = n-1;int left = 0;
        while(left < right)
        {
            if(!isalnum(s[left]))
            {
                left++;
            }
            if(!isalnum(s[right]))
            {
                right--;
            }
            
            if(isalnum(s[left]) && isalnum(s[right]))
            {
                if(tolower(s[left]) != tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }   
};
