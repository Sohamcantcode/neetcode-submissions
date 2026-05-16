class Solution {
public:
    bool isAnagram(string str1,string str2)
    {
        
        if(str1.length() != str2.length())
        {
            return false;
        }
        int n = str1.length();
        int arr1[26] = {0};
        int arr2[26] = {0};
        for(int i = 0;i<n;i++)
        {
            arr1[(int)str1[i] - 'a']++;
            arr2[(int)str2[i] - 'a']++;
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            int n = strs.size();
            vector<vector<string>> final;
            vector<bool> visited(n,false);
            for(int i = 0;i<n;i++)
            {
                if(visited[i])
                {
                    continue;
                }
                vector<string> temp;
                temp.push_back(strs[i]);
                visited[i] = true;
                

                
                for(int j = i+1;j<n;j++)
                {
                    if(isAnagram(strs[i],strs[j]) && !visited[j])
                    {
                        temp.push_back(strs[j]);
                        visited[j] = true;
                        
                    }
                    
                }
                if(temp.empty())
                {
                    continue;
                }
                else
                {
                    final.push_back(temp);
                    temp.clear();
                }
                
            }
            return final;
        
    }
};
