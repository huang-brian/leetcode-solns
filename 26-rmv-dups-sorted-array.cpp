class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int myElement = nums[0];
        int my_non_dup_list_it = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != myElement)
            {
                if (my_non_dup_list_it != i)
                {
                    nums[my_non_dup_list_it] = nums[i];
                }
                myElement = nums[i];
                my_non_dup_list_it++;
            }
            
        }
        return my_non_dup_list_it;
    }
};