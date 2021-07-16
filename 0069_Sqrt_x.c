
int mySqrt(int x)
{
    long int i;
    
    if (x==1) return 1;
    else if (x==0) return 0;
    
    for(i=1; i<=x/2; i++)    
        if ((x/(i*i)) == 0) break;;
    return i-1;

}
