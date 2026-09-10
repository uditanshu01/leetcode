class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int i=0;
        while(i<k)
        {
            sort(gifts.begin(),gifts.end());
            long long ele=gifts[gifts.size()-1];
            gifts[gifts.size()-1]=sqrt(ele);
            i++;
        }
        long long total=0;
        for(int j=0;j<gifts.size();j++)
        {
            total+=gifts[j];
        }
        return total;
    }
};