// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low=1,high=n;
        long int mid;
        if(n==1 || isBadVersion(1))
        {
            return 1;
        }
        if(isBadVersion(n)==true && isBadVersion(n-1)==false)
        {
            return n;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(isBadVersion(mid)==false)
            {
                if(isBadVersion(mid+1)==true)
                {
                    return mid+1;
                }
                low=mid+1;
            }
            else if(isBadVersion(mid)==true)
            {
                if(isBadVersion(mid-1)==false)
                {
                    return mid;
                }
                high=mid-1;
            }
        }
        return -1;
    }
};