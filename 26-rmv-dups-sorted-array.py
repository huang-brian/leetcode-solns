class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        testElement = nums[0]
        unique_element_it = 1
        for index, current_element in enumerate(nums):
            if current_element != testElement:
                if index != unique_element_it:
                    nums[unique_element_it] = current_element
                testElement = current_element
                unique_element_it += 1
        return unique_element_it