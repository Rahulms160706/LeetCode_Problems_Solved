/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = (n+1);
    int *res = (int *)malloc((n+1)*sizeof(int));
    for(int i = 0;i<n+1;i++) res[i] = 0;
    for(int i = 0;i<n+1;i++){
        int c = 0;
        int j = i;
        while(j>0){
            if(j&1) c++;
            j >>= 1;
        }
        res[i] = c;
    }
    return res;
}