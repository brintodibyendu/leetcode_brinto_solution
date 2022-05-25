class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            int low=0;
            int high=grid[i].size()-1;
            int mid,index=-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(grid[i][mid]<0)
                {
                    index=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(index!=-1){
            sum=sum+(grid[i].size()-index);
            }
        }
        return sum;
    }
};