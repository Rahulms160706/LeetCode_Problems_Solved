class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s;
        while(num > 0 && sum != 0){
            int i;
            for(i = 9;i>= 0;i--){
                if(i > sum) continue;
                else break;
            }
            s += i + '0';
            sum -= i;
            num--;
        }
        while(num > 0){
            s += '0';
            num--;
        }
        if(sum != 0) return "";
        return s;
    }
};