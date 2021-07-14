int romanToInt(char * s)
{
    int val=0;
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'M') val+=1000;
        else if(s[i]=='C' && s[i+1]=='M') {val+=900; i++; continue;}
        
        else if(s[i] == 'D') val+=500;
        else if(s[i]=='C' && s[i+1]=='D') {val+=400; i++; continue;}
        
        else if(s[i] == 'C') val+=100;
        else if(s[i]=='X' && s[i+1]=='C') {val+=90; i++; continue;}
        
        else if(s[i] == 'L') val+=50;
        else if(s[i]=='X' && s[i+1]=='L') {val+=40; i++; continue;}
        
        else if(s[i] == 'X') val+=10;
        else if(s[i]=='I' && s[i+1]=='X'){val+=9; i++; continue;}
        
        else if(s[i] == 'V') val+=5;
        else if(s[i]=='I' && s[i+1]=='V') {val+=4; i++; continue;}
        
        else if(s[i] == 'I') val+=1;
        
    }
    
    return (val);
}
