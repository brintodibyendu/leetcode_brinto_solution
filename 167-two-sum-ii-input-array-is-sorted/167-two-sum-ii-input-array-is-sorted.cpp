class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        vector<int> answer;
        while(low<=high)
        {
            int sum=numbers[low]+numbers[high];
            if(sum==target)
            {
                answer.push_back(low+1);
                answer.push_back(high+1);
                break;
            }
            else if(sum>target)
            {
                high=high-1;
            }
            else
            {
                low=low+1;
            }
        }
        return answer;
    }
};