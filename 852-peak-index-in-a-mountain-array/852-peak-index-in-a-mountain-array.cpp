class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=1;
        for(i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                break;
            }
        }
        return i;
    }
};