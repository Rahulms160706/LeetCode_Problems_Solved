class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int x = nums[0];
        int l = nums.size();
        int sum = nums[0];
        for(int i = 1;i<l;i++){
            if(nums[i] == (nums[i-1] + 1)){
                sum += nums[i];
            }
            else break;
        }
        int f = 1;
        while(f == 1){
            int cou = 0;
            for(int i = 0;i<l;i++){
                if(nums[i] == sum){
                    sum += 1;
                    cou = 1;
                    break;
                }
            }
            if(cou == 1) continue;
            else f = 0;
        }
        return sum;
    }
};