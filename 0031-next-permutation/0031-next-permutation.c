void nextPermutation(int* nums, int numsSize) {
    int l = -1,m = -1;
    for(int i = 0;i < numsSize-1;i++){
        if(nums[i] < nums[i+1]) l = i;
    }
    if(l == -1){
        m = numsSize-1;
        for(int i = 0;i<numsSize/2;i++){
            int tmp = nums[i];
            nums[i] = nums[m];
            nums[m] = tmp;
            m--;
        }
        return;
    }
    for(int j = l+1;j<numsSize;j++){
        if(nums[l] < nums[j]) m = j;
    }
    int tmp = nums[l];
    nums[l] = nums[m];
    nums[m] = tmp;
    if(l + 2 == numsSize-1){
        int tmp = nums[l+1];
        nums[l+1] = nums[numsSize-1];
        nums[numsSize-1] = tmp;
        return;
    }
    int n = numsSize-1;
    for(int i = l+1;i < n;i++){
        int tmp = nums[i];
        nums[i] = nums[n];
        nums[n] = tmp;
        n--;
    }
}