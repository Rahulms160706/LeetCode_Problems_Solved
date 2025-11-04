/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int max(int arr[]){
    int m = 0;
    for(int i=1;i<51;i++){
        if(arr[i] == arr[m]) m = i>m ? i : m;
        else if(arr[i] > arr[m]){
            m = i;
        }
    }
    return m;
}

int* findXSum(int* nums, int numsSize, int k, int x, int* returnSize) {
    int *res = (int *)malloc((numsSize-k+1)*sizeof(int));
    int q = 0;
    for(int i=0;i<numsSize-k+1;i++){
        int cpy = x;
        int arr[51] = {0};
        int sum=0;
        for(int j=i;j<i+k;j++){
            arr[nums[j]] += 1;
        }
        while(cpy>0){
            int p = max(arr);
            sum += p*arr[p];
            arr[p]=0;
            cpy--;
        }
        if(q < (numsSize-k+1)) res[q++] = sum;
    }
    *returnSize = numsSize - k + 1;
    return res;
}