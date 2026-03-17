void rotate(int* nums, int numsSize, int k) {
    if(k == 0 || numsSize == 1) return;
    if(numsSize < k){
        int n = numsSize, i = 1, prev = 0;
        while(n < k){
            prev = n;
            n = numsSize * (i++);
        }
        k = k - prev;
    }
    printf("%d",k);
    int arr[k];
    for(int i = 0;i<k;i++) arr[i] = 0;
    int j = 0;
    for(int i = numsSize-k;i<numsSize;i++){
        arr[j++] = nums[i];
    }
    int n = numsSize-1;
    for(int i = numsSize-k-1;i >= 0;i--){
        nums[n] = nums[i];
        n--;
    }
    for(int i = 0;i<k;i++){
        nums[i] = arr[i];
    }
}