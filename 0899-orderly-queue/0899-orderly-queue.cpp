class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1)
        {sort(s.begin(),s.end());
        return s;}
        else
        {
            string res=s;
            for(int i=1;i<s.size();i++)
            {
                string temp=s.substr(i)+s.substr(0,i);
                res=min(res,temp);
            }
            return res;
        }
    }
};