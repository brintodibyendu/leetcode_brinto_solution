class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;
        if(high==1)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            return -1;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else if(nums[mid]==target)
            {
                return mid;
            }
        }
        return -1;
    }
};