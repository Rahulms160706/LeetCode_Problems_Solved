class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        int i = 0, j = 0, k = 0;
        if(n <= 2){
            for(i = 0;i<=j;i++){
                for(j = i;j<=k;j++){
                    for(k = j;k<n;k++){
                        int t = nums[i] ^ nums[j] ^ nums[k];
                        s.insert(t);
                    }
                }
            }
        }
        else{
            int cp = n;
            int c = -1;
            while(cp > 0){
                int r = cp % 2;
                c++;
                cp /= 2;
            }
            return pow(2,(c+1));
        }
        return s.size();
    }
};