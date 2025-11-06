int minOperations(int* nums, int numsSize) {
    int f = nums[0];
    for(int i = 1;i<numsSize;i++){
        if(f != nums[i]) return 1;
    }
    return 0;
}