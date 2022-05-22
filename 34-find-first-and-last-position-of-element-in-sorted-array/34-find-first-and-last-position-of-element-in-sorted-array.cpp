class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=findleftel(nums,target);
        vector<int> answer;
        if(left==-1)
        {
            answer.push_back(-1);
            answer.push_back(-1);
            return answer;
        }
        int right=findrightel(nums,target);
        answer.push_back(left);
        answer.push_back(right);
        return answer;
    }
    
    int findleftel(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int leftmost=-1;
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
            else{
                leftmost=mid;
                high=mid-1;
            }
        }
        return leftmost;
    }
    
    int findrightel(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int rightmost=-1;
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
            else{
                rightmost=mid;
                low=mid+1;
            }
        }
        return rightmost;
    }
};