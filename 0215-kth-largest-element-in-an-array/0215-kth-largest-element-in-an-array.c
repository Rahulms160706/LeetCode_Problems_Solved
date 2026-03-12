int QuickSort(int *a, int l, int r, int key){
    int p = a[l];
    int i = l, j = r;
    while(i <= j){
        while(a[i] < p) i++;
        while(a[j] > p) j--;

        if(i <= j){
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if(key <= j){
        return QuickSort(a,l,j,key);
    }
    if(key >= i){
        return QuickSort(a,i,r,key);
    }
    return a[key];
}

int findKthLargest(int* nums, int numsSize, int k) {
    int l = 0, key = numsSize - k;
    return QuickSort(nums,l, numsSize-1, key);
}