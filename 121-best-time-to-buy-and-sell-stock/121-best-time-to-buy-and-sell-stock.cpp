class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxnum=-9999999;
        int diff=0;
        int minnum=9999999;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minnum)
            {
                minnum=prices[i];
            }
            else if((prices[i]-minnum)>diff)
            {
                diff=prices[i]-minnum;
            }
        }
        
        return diff;
    }
};