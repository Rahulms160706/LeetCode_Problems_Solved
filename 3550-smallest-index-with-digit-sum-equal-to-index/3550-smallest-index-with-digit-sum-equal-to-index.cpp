class Solution {
public:
    int sum(int x){
        int s = 0;
        while(x > 0){
            int d = x % 10;
            s += d;
            x /= 10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        int l = nums.size();
        for(int i = 0;i<l;i++){
            int s = nums[i] < 10 ? nums[i] : sum(nums[i]);
            if(s == i) return i;
        }
        return -1;
    }
};