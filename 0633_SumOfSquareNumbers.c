

bool judgeSquareSum(int c)
{
    int value =0,len;
    long int i,j;
    
    if (c<3) return true;
    
    len = sqrt(c);
    
    for(i=sqrt(c/2); i<=len; i++)
    {
        for (j=0; j<=i; j++)
        {
            if ((i*i + j*j) == c) {value = 1; break;}
            
            else if ((i*i + j*j) > c) break; 
        }
        
        if (value) break;
    }

    return ((value)? true : false);
}
