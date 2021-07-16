

bool isHappy(int n)
{
    int sum,loop=0;
    while (true)
    {
        sum = 0;
        for(int i=n; i>0; i=i/10) sum += (i%10) * (i%10);
        
        if (sum==1) break;
        if((++loop)==100) break;
        
        n = sum;
    }
    
    if (sum==1) return true;
    
    else return false;
    
}
