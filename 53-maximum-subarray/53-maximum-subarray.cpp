class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_cur=0;
        int max_total=-999999;
        for(int i=0;i<nums.size();i++)
        {
            max_cur=max_cur+nums[i];
            if(max_total<max_cur)
            {
                max_total=max_cur;
            }
            if(max_cur<0)
            {
                max_cur=0;
            }
        }
        return max_total;
    }
};