class Solution {
public:
    bool check(vector<int>& nums) {
        int l = nums.size();
        vector<int> cpy = nums;
        sort(cpy.begin(), cpy.end());
        for(int i = 0;i<l;i++){
            int k = 0;
            int s = i;
            while(k < l){
                if(nums[s%l] == cpy[k]){
                    k++; s++;
                } 
                else break;
            }
            if(k == l) return true;
        }
        return false;
    }
};