

int climbStairs(int n)
{
    if (n<3) return n;
    
    int val = 3, sum = 0, a = 1, b = 2;
    while(val <= n)
    {
        sum = a+b;
        a = b;
        b = sum;
        val++;
    }
    
    return sum;
}
