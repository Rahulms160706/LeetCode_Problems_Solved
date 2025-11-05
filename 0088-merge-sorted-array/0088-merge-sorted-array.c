int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int nums[m+n];
    int j = 0;
    for(int i = 0;i<m;i++) nums[j++] = nums1[i];
    for(int i = 0;i<n;i++) nums[j++] = nums2[i];
    qsort(nums,(m+n),sizeof(int),cmp);
    for(int i = 0;i<m+n;i++) nums1[i] = nums[i];
    
}