int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int l = nums1Size + nums2Size;
    int nums[l];
    int j = 0;
    for(int i = 0;i<nums1Size;i++){
        nums[j] = nums1[i];
        j++;
    }
    for(int i =0;i<nums2Size;i++){
        nums[j] = nums2[i];
        j++;
    }
    qsort(nums,l,sizeof(int),compare);
    return (l % 2 != 0) ? nums[((l+1) / 2) - 1] : (nums[(l/2) - 1] + nums[l/2])/2.0;
}