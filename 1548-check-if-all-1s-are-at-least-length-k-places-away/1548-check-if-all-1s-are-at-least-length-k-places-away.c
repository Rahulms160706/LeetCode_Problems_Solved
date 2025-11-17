bool kLengthApart(int* nums, int numsSize, int k) {
    for(int i =0;i<numsSize;i++){
        if(nums[i] == 1){
            int j = i+1;
            int c = 0;
            if(j == numsSize) return true;
            while(j < numsSize){
                if(nums[j] == 0) c++;
                else if(nums[j] == 1) break;
                j++;
            }
            if(j < numsSize && nums[j] == 1) {
                if(c < k) return false;
                else continue;
            }
            else break;
        }
    }
    return true;
}