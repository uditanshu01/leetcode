class Solution {
    public int missingMultiple(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
        mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);  
        }
       int i=1;
       while(true)
       {
        if(!mp.containsKey((i)*k))
        {
            return (i)*k;
        }
        i++;
       }
    }
}