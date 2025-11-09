int search(int* nums, int numsSize, int target) {
    int freq[20001]={0};
    for(int i = 0;i<numsSize;i++){
        if(nums[i] < 0) freq[10000+(-nums[i])] = 1;
        else freq[nums[i]] = 1;
    }
    if(target >= 0 && freq[target] == 1){
        for(int i = 0;i<numsSize;i++){
            if(target == nums[i]) return i;
        }
    }
    else if(target < 0 && freq[10000+(-target)] == 1){
        for(int i = 0;i<numsSize;i++){
            if(target == nums[i]) return i;
        }
    }
    return -1;
}