class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> n;
        for(auto i : nums1) n[i] = 1;
        for(auto i : nums2)
        {
            if(n.find(i) != n.end())
                n[i] = 2;
        }
        for(auto i : n)
            if(i.second == 2)
                res.push_back(i.first);
        return res;
    }
};
