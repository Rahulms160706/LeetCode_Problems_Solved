void sortColors(int* nums, int numsSize) {
    int count[3];
    for(int i = 0;i < 3; i++) count[i] = 0;
    for(int i = 0;i < numsSize;i++){
        if(nums[i] == 0) count[0] += 1;
        else if(nums[i] == 1) count[1] += 1;
        else count[2] += 1;
    }
    int i = 0;
    for(int j = 0;j<3;j++){
        while(count[j] > 0){
            nums[i++] = j;
            count[j] -= 1;
        }
    }
}