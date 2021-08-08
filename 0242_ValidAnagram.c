

bool isAnagram(char * s, char * t)
{
    int hash1[26] = {0}, hash2[26] = {0},check = 1;
    
    if(strlen(s)!=strlen(t)) return false;
    
    for(int i=0; s[i]!='\0'; i++)
    {   
        hash1[s[i] - 97]++;
        hash2[t[i] - 97]++;
    }
    
    for(int i=0; i<26; i++)
    {
        if(hash1[i] != hash2[i])
        {check = 0; break;}
    }
    
    return ((check==0)?false:true );

}
