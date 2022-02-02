/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int mid=n/2;
        long long int low=0;
        long long int high=n;
        while(low<=high)
        {
            mid=(low+high)/2;
            int c=guess(mid);
            if(c==0)
            {
                return mid;
            }
            else if(c==-1)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        
        
        return -1;
    }
};