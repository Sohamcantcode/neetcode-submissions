class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<int> arr;
        
        for(int j = 0;j<k;j++)
        {
            int max = mp[nums[0]];
            int maxElement = nums[0];
            for(int i = 0;i<n;i++)
            {
                if(mp[nums[i]] > max)
                {
                    max = mp[nums[i]];
                    maxElement = nums[i];
                }
            }
            mp.erase(maxElement);
            arr.push_back(maxElement);
        }
        
        return arr;



    }
};
