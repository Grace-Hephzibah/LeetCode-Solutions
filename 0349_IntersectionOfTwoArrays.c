
int* intersection(int* n1, int n1s, int* n2, int n2s, int* returnSize)
{
    int HashTable[1000] = {0}, c=-1;
    int *ans =  malloc(n1s*sizeof(int));
    
    for(int i=0; i<n1s; i++) if(HashTable[n1[i]] == 0) HashTable[n1[i]]++;
    for(int i=0; i<n2s; i++) if(HashTable[n2[i]] == 1) HashTable[n2[i]]++;    
    for(int i=0; i<1000; i++)  if(HashTable[i] == 2) ans[++c] = i;
    
    *returnSize = ++c;
    return ans;

}
