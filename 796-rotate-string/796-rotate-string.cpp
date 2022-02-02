class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++)
        {
            s.insert(0,1,s[s.size()-1]);
            s.erase(s.size()-1);
            if(s==goal)
            {
                return true;
            }
        }
        return false;
    }
};