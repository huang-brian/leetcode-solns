class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1)
        {
            return 1;
        }
        int i = 0, non_dup_index = 1, unique_elements = 0;
        for (; i < nums.size(); ++i)
        {
            while (non_dup_index<nums.size() && nums[i] == nums[non_dup_index])
            {
                non_dup_index++;
            }
            nums[i+1]=nums[non_dup_index];
            non_dup_index++;
            unique_elements++;
        }

        // for (int i = 0, non_dup_index = 1; i < nums.size() && non_dup_index < nums.size(); ++i)
        // {
        //     while (nums[i] == nums[non_dup_index] && non_dup_index < nums.size())
        //     {
        //         non_dup_index++;
        //     }
        //     nums[i] = nums[non_dup_index];
        //     unique_elements++;
        // }
        return unique_elements;
    }
};