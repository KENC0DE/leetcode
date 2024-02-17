class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        int i;
        vector<int> result(2);

        for (i = 0; i < length; i++)
        {
            int j = i + 1;
            
            for (; j < length; j++)
            {
                if (target - nums[i] == nums[j])
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return (result);
    }
};
