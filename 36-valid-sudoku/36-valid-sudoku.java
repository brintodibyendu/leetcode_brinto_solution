class Solution {
    public boolean isValidSudoku(char[][] board) {
        int N=9;
        HashSet<Character>[] rows=new HashSet[N];
        HashSet<Character>[] cols=new HashSet[N];
        HashSet<Character>[] boxs=new HashSet[N];
        
        for(int i=0;i<N;i++)
        {
            rows[i]=new HashSet<Character>();
            cols[i]=new HashSet<Character>();
            boxs[i]=new HashSet<Character>();
        }
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                char val=board[i][j];
                if(val=='.')
                {
                    continue;
                }
                if(rows[i].contains(val))
                {
                    return false;
                }
                rows[i].add(val);
                if(cols[j].contains(val))
                {
                    return false;
                }
                cols[j].add(val);
                
                int boxs_id=(i/3)*3+(j/3);
                if(boxs[boxs_id].contains(val))
                {
                    return false;
                }
                boxs[boxs_id].add(val);
            }
        }
        return true;
    }
}