class Solution {
public:
bool fun(int n)
{
     if(n==1 ) return true;
    if(n%2!=0 || n==0) return false;
    else return fun(n/2);

}

    bool isPowerOfTwo(int n) {
        return fun(n);
    }
};