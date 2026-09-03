class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int l = stones.size();
        while(l > 1){
            sort(stones.begin(), stones.end());
            int x = stones[l-1] - stones[l-2];
            if(x == 0) l-=2;
            else if(x<0){
                stones[l-2] = x * -1;
                l--;
            }
            else{
                stones[l-2] = x;
                l--;
            }
        }
        if(l == 0) return 0;
        return stones[0];
    }
};