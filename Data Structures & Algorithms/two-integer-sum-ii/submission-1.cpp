class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        while(true)
        {
                if(numbers[left] + numbers[right] == target)
                {
                        vector<int> indices;
                        indices.push_back(left+1);
                        indices.push_back(right+1);
                        return indices;
                }
                if(numbers[left] + numbers[right] > target)
                {
                        right--;
                }
                if(numbers[left] + numbers[right] < target)
                {
                        left++;
                }
        }

    }
};
