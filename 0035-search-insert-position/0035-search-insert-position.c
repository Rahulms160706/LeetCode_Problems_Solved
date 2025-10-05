int searchInsert(int* nums, int numsSize, int target) {
    int l = 0, h = numsSize - 1;
    int ind = 0;
    while(l <= h){
        int mid = (l + h)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target){
            h = mid - 1;
        }
        else if(nums[mid] < target){
            ind = mid;
            l = mid + 1;
        }
    }
    if(l > h) return l;
    return ind;
}