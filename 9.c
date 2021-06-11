

bool isPalindrome(long n)
{
    if (n<0)
        return false;
        
    else
    {
        long num = n, rev = 0;
        while (n != 0)  
        {
            rev = rev*10 + n%10;
            n = n/10;
        }
        
        if (rev == num)
            return true;
            
        else
            return false;
    }

}
