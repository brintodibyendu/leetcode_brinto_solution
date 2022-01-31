class Solution {
public:
    
    bool isAnagram(string s, string t) {
        map<char,int> brinto;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            brinto[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            brinto[t[i]]--;
        }
        for(int i=0;i<s.size();i++)
        {
            if(brinto[s[i]]!=0)
            {
                return false;
            }
        }
        return true;
    }
};