class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans, ans2;
        vector<int> res;
        unordered_map<int, int> u;
        for(int i = 0;i < nums1.size();i ++)
        {
            ans.insert(nums1[i]);
        }
        for(int i = 0;i < nums2.size();i ++)
        {
            ans2.insert(nums2[i]);
        }
        for(auto i : ans)
        {
            u[i] ++;
        }
        for(auto i : ans2)
        {
            u[i] ++;
        }
        for(auto i : u)
        {
            if(i.second>1)
                res.push_back(i.first);
        }

        return res;
        
    }
};
