class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max = n/2;
        int val;
        for(int i = 0;i<n;){
            int c = 0;
            val = nums[i];
            while(i < n && val == nums[i]){
                c++;
                i++;
            }
            if(c > max) {
                break;
            }
        }
        return val;
    }
};