int tribonacci(int n)
{  
    if (n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else
    {
        int t0 = 0, t1 = 1, t2 = 1, ans;
        
        for (int i = 3; i <= n; i++)
        {
            ans = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = ans;
        }
        
        return ans;
    }
        
}

/*
 if (n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else
        return(tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3));
*/
