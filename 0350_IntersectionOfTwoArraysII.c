int* intersect(int* n1, int n1s, int* n2, int n2s, int* returnSize)
{
    int ch,c=-1;
    int *ans =  malloc(n1s*sizeof(int));
    
    for(int i=0; i<n1s; i++)
        for(int j=0; j<n2s; j++)
            if (n1[i] == n2[j])
            {
                ans[++c] = n1[i];
                n1[i] = -1;
                n2[j] = -1;
                break;
            }

    *returnSize = ++c;
    return ans;

}
