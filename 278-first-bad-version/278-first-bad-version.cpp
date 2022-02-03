// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int low=1;
        long long int high=n;
        long long int mid;
        bool val=false;
        long long int pos=1;
        while(low<=high)
        {
            mid=(low+high)/2;
            
            if(isBadVersion(mid))
            {
                high=mid-1;
                pos=mid;
            }
            else if(!isBadVersion(mid))
            {
                low=mid+1;
            }
        }
        return pos;
    }
};