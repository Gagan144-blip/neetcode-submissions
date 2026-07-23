class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
        return false;

        map<char, char> sMap;
        map<char, char> tMap;

        for(int i=0;i < s.length();i++){

            if(sMap.count(s[i])){
                if(sMap[s[i]] != t[i]){
                    return false;
                }
            }

            if(tMap.count(t[i])){
                if(tMap[t[i]] != s[i]){
                    return false;
                }
            }
            sMap[s[i]] = t[i];
            tMap[t[i]] = s[i];
        }
        return true;
    }
};