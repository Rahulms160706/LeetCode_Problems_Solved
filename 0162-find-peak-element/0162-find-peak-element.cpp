class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int max = INT_MIN, ind = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > max){
                max = nums[i];
                ind = i;
            }
        }
        return ind;
    }
};