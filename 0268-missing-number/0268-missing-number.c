int missingNumber(int* nums, int numsSize) {
    int l = numsSize+1;
    int freq[l];
    for(int i = 0;i<l;i++) freq[i] = 0;
    for(int i = 0;i<numsSize;i++){
        freq[nums[i]] = 1;
    }
    for(int i = 0;i<l;i++){
        if(freq[i] == 0) return i;
    }
    return -1;
}