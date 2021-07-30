int titleToNumber(char * ct) // ct -> columnTitle
{
    int l = strlen(ct),res = 0;
    long int mul = 1;
    
    for(int i = l-1; i>=0 ;i--)
    {
        res += (ct[i] - 64) * mul;
        mul *= 26;
        
    }
    
    return res;
}
