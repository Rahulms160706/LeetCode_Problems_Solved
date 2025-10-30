void moveZeroes(int* nums, int numsSize) {
    int *dup = (int*)malloc(numsSize * sizeof(int));
    for(int i =0;i<numsSize;i++){
        dup[i] = 0;
    }
    int j = 0;
    for(int i =0 ;i<numsSize;i++){
        if(nums[i] != 0) dup[j++] = nums[i];
    }
    for(int i =0;i<numsSize;i++){
        nums[i] = dup[i];
    }
}