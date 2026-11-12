class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = nums.size();
        int sum = 0, m = INT_MIN;
        for(int i = 0;i<l;i++){
            sum = max(sum+nums[i], nums[i]);
            m = max(m,sum);
        }
        return m;
    }
};