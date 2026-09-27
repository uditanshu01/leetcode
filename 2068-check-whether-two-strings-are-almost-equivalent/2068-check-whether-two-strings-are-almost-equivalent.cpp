class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<char>v1(26,0);
        vector<char>v2(26,0);
        for(auto i:word1)
        {
            v1[i-'a']++;
        }
        for(auto i:word2)
        {
            v1[i-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(v1[i]<-3)
            return false;
            if( v1[i]>3)
            return false;
        }
        return true;
        
    }
};