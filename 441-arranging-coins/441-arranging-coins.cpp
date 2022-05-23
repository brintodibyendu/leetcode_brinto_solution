class Solution {
public:
    int arrangeCoins(int n) {
        long int low=1;
        long int high=n/2;
        long int mid,sum;
        if(n==1)
        {
            return 1;
        }
        if(n==3)
        {
            return 2;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid%2==0)
            {
                sum=mid*(1+mid)/2;
                if(sum==n)
                {
                    return mid;
                }
                else if(sum>n)
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else if(mid%2!=0)
            {
                long int k_sum=mid-1;
                sum=k_sum*(1+k_sum)/2;
                if((sum+mid)==n)
                {
                    return mid;
                }
                else if((sum+mid)>n)
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return low-1;
    }
};