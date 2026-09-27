class Solution {
public:
    int reverseDegree(string s) {
        int l = s.length();
        int sum = 0;
        for(int i = 0;i<l;i++){
            int prod = (26 - (s[i] - 'a')) * (i+1);
            sum += prod;
        }
        return sum;
    }
};