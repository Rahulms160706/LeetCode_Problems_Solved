class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        int q = 1;
        for(int i = 0;i<l;i++){
            if(nums[i] % k == 0){
                if(k * q == nums[i]) q++;
                else continue;
            }
        }
        return k * q;
    }
};