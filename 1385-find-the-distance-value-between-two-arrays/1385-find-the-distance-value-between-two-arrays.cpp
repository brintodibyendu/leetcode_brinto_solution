class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        sort(arr1.begin(),arr1.end());
        int num=0;
        int i=0,j=0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(abs(arr1[i]-arr2[j])<=d)
            {
                num++;
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                j++;
            }
            else{
                i++;
            }
        }
        return arr1.size()-num;
    }
};