class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> vec( text1.size()+1 , vector<int> (text2.size()+1));
        for(int i=0;i<=text1.size();i++)
        {
            for(int j=0;j<=text2.size();j++)
            {
                vec[i][j]=0;
                //vec[0][i]=0;
            }
            
        }
        for(int i=0;i<text1.size();i++)
        {
            for(int j=0;j<text2.size();j++)
            {
                if(text1[i]==text2[j])
                {
                    vec[i+1][j+1]=vec[i][j]+1;
                }
                else{
                    vec[i+1][j+1]=max(vec[i][j+1],vec[i+1][j]);
                }
            }
        }
        return vec[text1.size()][text2.size()];
    }
};