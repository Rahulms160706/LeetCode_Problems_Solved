class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        int n=nums.size();
        auto m = max_element(nums.begin(), nums.end());
        bool exists;
        int val;    
        for(int i=1; i<=*m; i++){
            exists = find(nums.begin(), nums.end(), i) != nums.end();
            if(!exists){
                val=i;
                break;
            }
        }
        return val;
        */
        /*
        auto m = max_element(nums.begin(), nums.end());
        int n = nums.size();
        if(*m < 0) return 1;
        if(*m == INT_MAX) *m -= 1;
        int arr[*m];
        for(int i = 0;i<*m;i++) arr[i] = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] <= 0) continue;
            arr[nums[i] - 1] = nums[i];
        }
        int i;
        for(i = 0;i<*m;i++){
            if((arr[i] - 1) != i) break;
        }
        return i+1;
        */
        set<int> s;
        sort(nums.begin(), nums.end());
        int l = nums.size();
        for(int i = 0;i<l;i++){
            if(nums[i] <= 0) continue;
            s.insert(nums[i]);
        }
        int i;
        int c = 1;
        for(auto i : s){
            if(c != i){
                break;
            }
            else c++;
        }
        return c;
    }
};