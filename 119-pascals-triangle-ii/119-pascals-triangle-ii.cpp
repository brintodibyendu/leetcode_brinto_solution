class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> psc_trn(rowIndex+1);
        
        
        for(int i=0;i<rowIndex+1;i++)
        {
            psc_trn[i].push_back(1);
            if(i>1)
            {
                for(int j=1;j<=i-1;j++)
                {
                    psc_trn[i].push_back(psc_trn[i-1][j]+psc_trn[i-1][j-1]);
                }
                
            }
            if(i>=1)
            {
                psc_trn[i].push_back(1);
            }
            
        }
        return psc_trn[rowIndex];
    }
};