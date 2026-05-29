int minElement(int* nums, int numsSize) {
    int min = INT_MAX;
    for(int i = 0;i<numsSize;i++){
        int n = 0;
        if(nums[i] < 9) n = nums[i];
        else{
            int s = 0;
            while(nums[i] > 0){
                int d = nums[i] % 10;
                s += d;
                nums[i] /= 10;
            }
            n = s;
        }
        if(n < min) min = n;
    }
    return min;
}