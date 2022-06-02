class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()<=nums2.size())
        {
            vector<int> ans;
            unordered_map<int,int> m;
            for(auto num:nums1)
            {
                m[num]++;
            }
            for(auto num:nums2)
            {
                auto it=m.find(num);
                if(it!=end(m) && it->second>0)
                {
                    ans.push_back(it->first);
                    it->second=it->second-1;
                }
            }
            return ans;
        }
        else{
            return intersect(nums2,nums1);
        }
    }
};