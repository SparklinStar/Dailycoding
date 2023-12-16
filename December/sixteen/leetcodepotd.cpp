class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m)
        return false;
        int map[26] = {0};
        for(int i=0;i<n;++i)
        {
            map[s[i]-'a']++;
            map[t[i]-'a']--;
        }
        for(int i:map){
            if(i!=0)
            return false;
        }
        return true;
    }
};