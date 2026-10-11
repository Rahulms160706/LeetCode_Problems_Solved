class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int l = nums.size();
        int res = 0;
        for(int i = 0;i<l;i++){
            if(l % (i+1) == 0){
                res += pow(nums[i], 2);
            }
        }
        return res;
    }
};