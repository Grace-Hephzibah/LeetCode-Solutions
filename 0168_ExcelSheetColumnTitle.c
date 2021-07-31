char * convertToTitle(int cn) // cn -> columnNumber
{
    long place = 1, tot = 0,i;
    int len=0, n;

    while (cn > tot)
    {
        place *= 26;
        tot += place;
        len++;
    }

    char *str = (char *) malloc((len+2)*sizeof(char));

    for(i=0; len>0; len--, i++)
    {
        n = (cn%(place/26)==0 && len!=1)? cn/(place/26) -1: cn/(place/26) ;  
        str[i] =  n + 64;
        tot -= place;
        place /= 26;
        cn -= n*place;
    }
    str[i] = '\0';

    return str;
}
