class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0;i < nums1.size();i ++)
        {
            int st = 0, ed = nums2.size() - 1;
            while(st <= ed)
            {
                int mid = (st + ed)/2;
                if(nums2[mid] == nums1[i])
                {
                    return nums1[i];
                }
                else if(nums2[mid] > nums1[i])
                {
                    ed = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
        }
        return -1;

    }
};
