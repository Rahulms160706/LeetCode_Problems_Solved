class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int i = n - k;
        int j = n - 1;
        stack<int> s;
        while(i < n){
            s.push(nums[i]);
            i++;
        }
        i = n - k - 1;
        while(i >= 0){
            nums[j] = nums[i];
            j--; i--;
        }
        for(int m = k-1;m>=0;m--){
            nums[m] = s.top();
            s.pop();
        }
    }
};