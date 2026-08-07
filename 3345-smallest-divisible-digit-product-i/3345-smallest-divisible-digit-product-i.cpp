class Solution {
public:
    int digits(int n){
        int p = 1;
        while(n > 0){
            int r = n % 10;
            p = p * r;
            n /= 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int f = 0;
        while(f == 0){
            int p = digits(n);
            if(p % t == 0){
                f = 1;
            }
            else n++;
        }
        return n;
    }
};