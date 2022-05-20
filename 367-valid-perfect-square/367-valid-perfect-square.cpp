class Solution {
public:
    bool isPerfectSquare(int num) {
        long int low=1;
        long int high=num/2;
        long int mid;
        if(num==1)
        {
            return true;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid>num)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};