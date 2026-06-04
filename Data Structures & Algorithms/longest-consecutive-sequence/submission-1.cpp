class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_map<int,bool> map;
        int length = 0;
        int n = nums.size();
        int maxLength=0;
        for(int i = 0;i<n;i++)
        {
            map[nums[i]] = false;
        }
        for(int i = 0;i<n;i++)
        {
            if(map.find(nums[i] - 1) == map.end())
            {
                map[nums[i]] = true;
            }
        }
        for(int i = 0;i<n;i++)
        {
            int length = 0;
            if(map[nums[i]])
            {
                length++;
                int num = nums[i];
                while(true)
                {
                    if(map.find(num + 1) != map.end())
                    {
                        length++;
                        num++;
                    }
                    else
                    {
                        break;
                    }
                }
                
            }
            if(length > maxLength)
            {
                maxLength = length;
            }
        }
        
        return maxLength;
    }
};
