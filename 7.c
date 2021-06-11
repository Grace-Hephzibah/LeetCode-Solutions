

int reverse(int n)
{
    long rev = 0;
    while (n != 0)  
    {
        rev = rev*10 +n%10;
        n = n/10;
    }
        
    return (INT_MIN<=rev && rev<=INT_MAX) ? rev : 0;
}
