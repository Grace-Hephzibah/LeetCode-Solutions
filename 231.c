bool isPowerOfTwo(int n)
{
    if (n==1)
        return true;
    else if (n==0)
        return false;
    else
        return (n%2==0)?isPowerOfTwo(n/2): isPowerOfTwo(0);
}
