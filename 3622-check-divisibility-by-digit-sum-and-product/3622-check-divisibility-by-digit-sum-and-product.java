class Solution {
    int sum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int a=n%10;
            sum=sum+a;
            n=n/10;
        }
        return sum;
    }
    int product(int n)
    {
        int produ=1;
        while(n>0)
        {
            int a=n%10;
            produ=produ*a;
            n=n/10;
        }
        return produ;
    }
    public boolean checkDivisibility(int n) {
       int sumo= sum(n);
       int produ=product(n);
       if(sumo+produ ==0)
       return false;
       if(n%(sumo+produ)==0)
       return true;
       else
       return false;
    }
}