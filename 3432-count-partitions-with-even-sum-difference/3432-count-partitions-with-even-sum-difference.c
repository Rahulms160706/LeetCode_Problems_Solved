int countPartitions(int* nums, int numsSize) {
    int s = 0,c = 0;
    for(int i = 0;i<numsSize-1;i++){
        s += nums[i];
        int is = 0;
        for(int j = i+1;j<numsSize;j++){
            is += nums[j];
        }
        if((s - is)%2 == 0) c++;
    }
    return c;
}