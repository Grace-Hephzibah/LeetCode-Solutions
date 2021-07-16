

bool isValid(char *s)
{
    int l = strlen(s),val = 0;
    char check[l]; 
    for(int i=0; i<l; i++)
    {
        if (s[i]=='(' || s[i]=='[' || s[i]=='{')
        { check[val] = s[i];  val++; }
        
        else if (val!=0)
        {
            if ((s[i]==')' && check[val-1]=='(') || (s[i]==']' && check[val-1]=='[')
                || (s[i]=='}' && check[val-1]=='{'))      val--;
            
            else 
                return false;
        }
        
        else
            return false;
    }
    
    if (val==0) return true;
    else return false;

}
