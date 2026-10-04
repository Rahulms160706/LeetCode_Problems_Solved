class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, l = nums.size();
        int min1 = nums[i++], min2 = nums[i];
        int max1 = nums[l-1], max2 = nums[l-2], max3 = nums[l-3];
        int p = min1 * min2 * max1;
        if(p > (max1*max2*max3)) return p;
        return max1*max2*max3;
    }
};