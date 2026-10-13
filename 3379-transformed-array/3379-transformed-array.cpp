class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res;
        int l = nums.size();
        for(int i = 0;i<l;i++){
            if(nums[i] == 0) res.push_back(nums[i]);
            else if(nums[i] > 0){
                int k = (i + nums[i]) % l;
                res.push_back(nums[k]);
            }
            else{
                int k = (((nums[i] + i) % l) + l) % l;
                res.push_back(nums[k]);
            }
        }
        return res;
    }
};