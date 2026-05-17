class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product = 1;
        int n = nums.size();
        vector<int> arr;
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                product*=nums[i];
            }
            if(nums[i] == 0)
            {
                count++;
            }
            
        }
        for(int i = 0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                if(count > 0)
                {
                    arr.push_back(0);
                }
                else
                {
                    arr.push_back(product/nums[i]);
                }
                
            }
            else if(nums[i] == 0)
            {
                if(count == 1)
                {
                    arr.push_back(product);
                }
                else if(count > 1)
                {
                    arr.push_back(0);
                }
            }

            
        }
        return arr;

    }
};
