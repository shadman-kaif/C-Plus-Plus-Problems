class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;

        int mapS[26]={0}, mapT[26]={0};

        for(int i=0;i<s.length();i++){
            mapS[s[i]-'a']++;
            mapT[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(mapS[i]!=mapT[i])
                return false;
        }
        return true;
    }
};