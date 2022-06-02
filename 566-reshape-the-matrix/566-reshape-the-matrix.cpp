class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        queue<int> qu;
        if(mat.size()==0 || r*c!=mat.size()*mat[0].size())
        {
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                qu.push(mat[i][j]);
            }
        }
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    ans[i][j]=qu.front();
                    qu.pop();
                }
            }
        return ans;
        
    }
};