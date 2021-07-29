int cmp (int *a, int *b)
{
    return ((int)*a - (int)*b);
}
int maximumProduct(int* nums, int numsSize)
{
    if (numsSize == 3) return (nums[0] * nums[1] * nums[2]);
    int temp;
    
    qsort(nums, numsSize, sizeof(int), cmp);
       
   int max = -9999999,pro = 0;
    for(int i = numsSize-3; i<numsSize+3; i=i+2)
    {
        pro = nums[i%numsSize] * nums[(i+1)%numsSize] * nums[(i+2)%numsSize];
        if (pro > max) max = pro;
    }
    
    return max;

}
