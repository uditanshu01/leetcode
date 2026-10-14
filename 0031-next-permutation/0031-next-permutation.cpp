class Solution {
public:
void reverse(int start,int end,vector<int>&arr)
{ int l=start;
int r=end;
    int mid=(l+r)/2;
    while(l<=mid)
    {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
    void nextPermutation(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        i=n-2;
        j=n-1;
        while(i>=0 && nums[i]>=nums[i+1])
        {
            i--;
        }
         if(i<0)
            {
                reverse(0,n-1,nums);
                return;
            }
            while(j>=0 && nums[j]<=nums[i])
            {
                j--;
            }
            
            {
                swap(nums[i],nums[j]);
                reverse(i+1,n-1,nums);
            }
        
    for(int i:nums)
    {
        cout<<i;
    }
    }
};