int countQuadruplets(int* nums, int numsSize) {
    int c = 0;
    for(int i = 0;i<numsSize;i++){
        int a = nums[i];
        for(int j = i+1;j<numsSize;j++){
            int b = nums[j];
            for(int k = j+1;k<numsSize-1;k++){
                int l = k+1;
                int sum = (a + b + nums[k]);
                while(l < numsSize){
                    if(sum == nums[l]) c++;
                    l++;
                }
            }
        }
    }
    return c;
}