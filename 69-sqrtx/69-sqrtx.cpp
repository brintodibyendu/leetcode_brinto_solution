class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        {return 0;}
        long int low=1;
        long int high=x/2;
        long int mid;
        while(low<high)
        {
            mid=(low+high)/2;
            if(mid*mid==x)
            {
              //break;
               // return mid;
                return mid;
            }
            else if(mid*mid>x && (mid-1)*(mid-1)<x)
            {
                return mid-1;
            }
            else if((mid*mid)<x && (mid+1)*(mid+1)>x)
            {
                return mid;
            }
            else if((mid*mid)<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};