class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
       vector<vector<int>>v(n+1);
       vector<vector<int>>res;
       
       for(int i=0;i<groupSizes.size();i++)
       {
        int l=groupSizes[i];
        v[l].push_back(i);
        if(v[l].size()==l)
        {res.push_back(v[l]);
        v[l]={};}
       } 
       return res;
    }
};