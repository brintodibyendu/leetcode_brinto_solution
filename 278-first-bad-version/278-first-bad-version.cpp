// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low=1;
        long int high=n;
        long int mid;
        if(n==1)
        {
            return n;
        }
        while(low<high)
        {
            mid=(low+high)/2;
            if(isBadVersion(mid)==false)
            {
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};