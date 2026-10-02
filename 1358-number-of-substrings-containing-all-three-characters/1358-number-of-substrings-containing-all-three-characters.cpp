class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int>mp;
        int l=0,r=0;
        int ans=0;
        for( r=0;r<s.size();r++)
        {
            mp[s[r]-'a']++;
            while(mp[0]>0 && mp[1]>0 && mp[2]>0)
            {
                ans+= s.size()-r;
                mp[s[l]-'a']--;
                l++;
            }
        }
        return ans;
    }
};