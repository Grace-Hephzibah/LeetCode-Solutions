

bool isPerfectSquare(int num)
{
    if (num==0 || num==1) return true;
    
    int value = 0;
    for(long int i=2; i<=num/2; i++)
    {
        if (num%(i*i)==0 && num/(i*i)==1) {value = 1; break;}
        else if(num/(i*i) < 1) break;
    }
    
     return ( (value)? true:false ) ;

}
