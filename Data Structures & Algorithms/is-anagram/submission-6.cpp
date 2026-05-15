class Solution {
public:
    bool isAnagram(string s, string t)
    {

        
        if(s.length() != t.length())
        {
            return false;
        }
        int n = s.length();
        int arr1[26] = {0};
        int arr2[26] = {0};
        for(int i = 0;i<n;i++)
        {
            arr1[(int)s[i] - 'a']++;
            arr2[(int)t[i] - 'a']++;
        }
        for(int i = 0;i<26;i++)
        {
            if(arr1[i] != arr2[i])
            {
                return false;
            }
        }
        return true;
        
        
    }
};
