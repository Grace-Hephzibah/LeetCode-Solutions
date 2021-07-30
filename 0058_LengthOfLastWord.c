int lengthOfLastWord(char * s)
{
    int l = strlen(s), tot = 0;
    
    for (int i = l-1; i>=0; i--)
    {
        if (s[i] == 32 && tot>0) break;
        else if(s[i] == 32 && tot==0) continue;
        else  tot++;
    }
    
    return tot;

}
