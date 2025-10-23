class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m;
        int j = n;

        for (int k = m+n-1; k >= 0 && j>0; k--)
        {
            if (i>0 && nums1[i-1] > nums2[j-1])
            {
                nums1[k] = nums1[i-1];
                i--;
            }
            else
            {
                nums1[k] = nums2[j-1];
                j--;
            }
        }

        
    }
};