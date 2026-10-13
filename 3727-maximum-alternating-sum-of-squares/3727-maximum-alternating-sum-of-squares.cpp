class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int l = nums.size();
        for(int i = 0;i<l;i++){
            if(nums[i] < 0) nums[i] *= -1;
        }
        sort(nums.begin(), nums.end());
        int n = ceil(l / 2);
        int i = 0, j = l-1;
        long long int ne = 0, p = 0;
        for(int i = 0;i<n;i++){
            ne += pow(nums[i],2);
        }
        for(int i = n;i<l;i++){
            p += pow(nums[i],2);
        }
        return p - ne;
    }
};