class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0] = vector<int>(1);
        ans[0][0]=1;
        if(numRows==1)
        {
            return ans;
        }
        ans[1] = vector<int>(2);
        ans[1][0]=1,ans[1][1]=1;
        if(numRows==2)
        {
            return ans;
        }
        for(int i=2;i<numRows;i++)
        {
            ans[i]=vector<int>(i+1);
            ans[i][0]=1;
            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans[i][i]=1;
        }
        return ans;
    }
};