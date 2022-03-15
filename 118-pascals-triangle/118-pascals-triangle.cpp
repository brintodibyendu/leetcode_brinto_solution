class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> psc_trn(numRows);
        for(int i=0;i<numRows;i++)
        {
            //psc_trn[i]=vector<int>(i+1);
            psc_trn[i].push_back(1);
            if(i>1){
            for(int j=1;j<=i-1;j++)
            {
                psc_trn[i].push_back(psc_trn[i-1][j-1]+psc_trn[i-1][j]);
            }
            }
            if(i>=1){
            psc_trn[i].push_back(1);
            }
        }
        return psc_trn;
    }
};