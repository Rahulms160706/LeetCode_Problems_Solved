int mirrorDistance(int n) {
    long long int r = 0;
    for(int i = n;i>0;i/=10){
        r = 10*r + (i%10);
    }
    return abs(r - n);
}