  
int cmp (int *a, int *b)
{
    return ((int)*a - (int)*b);
}

int missingNumber(int* nums, int numsSize)
{
    int i;
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for(i=0; i<numsSize; i++)
        if(i != nums[i]) break;
    
    return i;

}
