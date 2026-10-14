class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        vector<int> n;
        while(num > 0 && sum != 0){
            int i;
            for(i = 9;i>= 0;i--){
                if(i > sum) continue;
                else break;
            }
            n.push_back(i);
            sum -= i;
            num--;
        }
        while(num > 0){
            n.push_back(0);
            num--;
        }
        if(sum != 0) return "";
        string ans;
        for(int i : n) ans += to_string(i);
        return ans;
    }
};