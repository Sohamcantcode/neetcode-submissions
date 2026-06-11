class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> solution;
        for(int i = 0;i<n;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int target = - nums[i];
            int left = i+1;
            int right = n-1;
            int sum = nums[left] + nums[right];
            while(left<right)
            {
                sum = nums[left] + nums[right];
                if(sum > target)
                {
                    right--;
                }
                else if(sum < target)
                {
                    left++;
                }
                else
                {
                    solution.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                    {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right+1])
                    {
                        right--;
                    }
                }                
            }
        }  
        return solution; 
    }
};