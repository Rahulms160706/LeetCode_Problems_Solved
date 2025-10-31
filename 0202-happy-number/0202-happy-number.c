bool isHappy(int n) {
    long res= 0;
    int c = log2(n);
    while(n >9&&c >= 0){
        int k=n;
        while(k>0){
            int d = pow(k % 10, 2);
            res = res+d;
            k /= 10;
        }
        n = res;
        c--;
        res = 0;
    }
    if (n == 1 ||n==7) return true;
    return false;
}