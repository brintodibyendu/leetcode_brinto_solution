class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> brinto;
        int i=0;
        while(i<t.size())
        {
            brinto[t[i]]++;
            i++;
        }
        
        i=0;
        while(i<s.size())
        {
            brinto[s[i]]--;
            i++;
        }
        char c='a';
        for(int i=0;i<26;i++)
        {
            if(brinto[c]==1)
            {
                break;
            }
            c=c+1;
        }
        return c;
    }
};