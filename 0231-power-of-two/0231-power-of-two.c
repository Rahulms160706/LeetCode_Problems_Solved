bool isPowerOfTwo(int n) {
    long long int c = 0;
    if(n<0) return false;
    while(n){
        if(n&1) c++;
        n>>=1;
    }
    return c == 1;
}