/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int end = -1;
    *returnSize = 2;
    int *res = (int*)malloc(2 * sizeof(int));
    for(int i = numsSize-1;i>=0;i--){
        if(nums[i] == target){
            end = i;
            break;
        }
        else if(nums[i] < target){
            break;
        }
    }
    if(end == -1){
        res[0] = -1;
        res[1] = -1;
    }
    else{
        res[1] = end;
        int i = end, prev = end;
        while(i >= 0 && nums[i] == target){
            prev = i;
            i--;
        }
        res[0] = prev;
    }
    return res;
}