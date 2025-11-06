int singleNumber(int* nums, int numsSize) {
    int arr[60001] = {0};
    for(int i = 0;i<numsSize;i++){
        if(nums[i] >= 0) arr[nums[i]] += 1;
        else arr[30000+(-nums[i])] += 1; 
    }
    for(int i = 0;i<30000;i++){
        if(arr[i] == 1) return i;
    }
    for(int i = 30001;i<60001;i++){
        if(arr[i] == 1) return 30000-i;
    }
    return -1;
}