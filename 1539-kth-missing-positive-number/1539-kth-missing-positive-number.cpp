class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;;
        int high=arr.size()-1;
        int mid;
        
        while(low<=high)
        {
            mid=(low+high)/2;
            if((arr[mid]-(mid+1)<k))
               {
                   low=mid+1;
                //index=low;
               }
            else{
                high=mid-1;
                //index=high;
            }
        }
        
        return k+low;
    }
};