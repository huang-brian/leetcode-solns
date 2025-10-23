class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nonmatching_elements = 0;
        size_t size = nums.size();
        int j = size - 1;
        for (int i = 0; i < size; ++i)
        {
            if (j>0 && nums[i] == val)
            {

                while(j >0 && nums[j] == nums[i])
                {
                    j--; //always check your array indices in C++. you don't want to accidentally throw an exception by accessing an array out of bounds.
                }
                nums[i] = nums[j];
                j--;
            }
            else if (nums[i] != val)
            {
                nonmatching_elements++;
            }
        }



        return nonmatching_elements;
    }
};