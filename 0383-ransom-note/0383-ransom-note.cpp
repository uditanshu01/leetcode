class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>given;
        for(auto & it : magazine)
        {
         given[it]++;
        }
        map<char,int>needed;
        for(auto &it : ransomNote)
        {
            needed[it]++;
        }
        for(auto &it:needed)
        {
            char c=it.first;
            int num=it.second;
            if(it.second> given[c])
            return false;
        }
        return true;
    }
};