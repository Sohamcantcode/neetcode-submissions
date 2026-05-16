class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            int difference = target - nums[i];
            if(mp.find(difference) != mp.end())
            {
                if(i<mp[difference])
                {
                    return{i,mp[difference]};
                }
                else
                {
                    return{mp[difference],i};
                }
            }
            mp[nums[i]] = i;
        }

    }
};
