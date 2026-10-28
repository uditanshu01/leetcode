class Solution {
public:
   void dfs(vector<vector<int>>& rooms,vector<int>&visited,int curr)
    {
        if(visited[curr])
        return ;
        visited[curr]=1;
        for(auto it:rooms[curr])
        {
            if(visited[it]==0)
            dfs(rooms,visited,it);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     vector<int>visited(rooms.size(),0);
    dfs(rooms,visited,0);
    for(int i=0;i<rooms.size();i++)
    {
        if(visited[i]==0)
        return false;
    }
    return true;

    }
};