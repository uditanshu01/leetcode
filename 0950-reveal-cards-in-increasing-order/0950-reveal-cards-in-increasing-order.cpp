class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int>res(n);
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            q.push(i);
        }
        int j=0;
        while(!q.empty())
        {
            int i=q.front();
            res[i]=deck[j];
            q.pop();
            int skip=q.front();
            q.pop();
            q.push(skip);
            j++;
        }
return res;
    }
};