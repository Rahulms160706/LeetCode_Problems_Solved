int removeDuplicates(int* nums, int numsSize) {
    /*
    int r = 0; int n = 0, k = 0; int nl = 0;
    for(int i=0;i<numsSize-r;i++){
        n = nums[i];
        k = i+1;
        nl = numsSize - r;
        for(int j=i+1;j<nl;j++){
            if(nums[j] != n){
                nums[k] = nums[j];
                k++;
            }
            else ++r;
        }
    }
    return numsSize - r;
    */
    if (numsSize == 0) return 0;
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}