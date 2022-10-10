class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> hash;
        set<char> Myset;
        for(int i=0;i<s.size();i++)
        {
            if(hash.find(s[i])==hash.end() )
            {
                hash[s[i]]=t[i];
                if(Myset.find(t[i])!=Myset.end())
                    return false;
                Myset.insert(t[i]);
            }
            else
            {
                if(hash[s[i]]!=t[i] )
                    return false;
            }
        }
        return true;
    }
};