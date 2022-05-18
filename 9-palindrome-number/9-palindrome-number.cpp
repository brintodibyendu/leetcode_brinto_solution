class Solution {
public:
    bool isPalindrome(int x) {
        long int k=x;
        long int sum=0;
        if(x<0)
        {
            return false;
        }
        while(k!=0)
        {
            sum=(sum*10)+(k%10);
            k=k/10;
        }
        if(x==sum)
        {
            return true;
        }
        return false;
    }
};