/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    long long int n=0;
    *returnSize = numsSize ;
    bool *arr=(bool*)malloc(numsSize*(sizeof(bool)));
    for(int i = 0;i<numsSize;i++){
        n = (n*2 + nums[i])%5;
        arr[i] = (n==0);
    }
    return arr;
}