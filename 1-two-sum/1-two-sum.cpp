class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int again=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
                if(sum!=target)
                {
                    sum=sum-nums[j];
                }
                else{
                    answer.push_back(i);
                    answer.push_back(j);
                    again=1;
                    break;
                }
            }
            if(again==1)
            {
                break;
            }
        }
        return answer;
    }
};