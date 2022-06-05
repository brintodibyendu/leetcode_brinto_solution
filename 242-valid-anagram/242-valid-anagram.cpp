class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(arr[t[i]-'a']>=1)
            {
                arr[t[i]-'a']--;
            }
            
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]>=1)
            {
                return false;
            }
        }
        return true;
    }
};