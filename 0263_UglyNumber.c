

bool isUgly(int n)
{
    if (n==0) return false;
    
    int ugly[7] = {30,15,10,6,5,3,2}, c=0;
    
    while(c<7)
    {
        if (n%ugly[c] == 0) n /= ugly[c];
        else
            c++;
    }
    
    if (n==1) return true;
    else return false;
}
