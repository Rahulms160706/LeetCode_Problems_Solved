/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize= 2;
    int k=0;
    int *arr = (int*)malloc(2*sizeof(int));
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i = 1;i<numsSize;i++){
        if(nums[i-1] == nums[i]) arr[k++] = nums[i-1];
    }
    return arr;
}