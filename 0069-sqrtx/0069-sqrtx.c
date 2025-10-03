int mySqrt(int x) {
    /* This takes a lot of time
    long long int l,u;
    long long int res = 0;
    if(x == 1) return 1;
    for(long long int i=1;i<INT_MAX / 2 - 1;i++)
    {
        u = i*i;
        long int d = i-1;
        l = d*d;
        if(x > l && x < u) { res = i-1; break; }
        else if(x == l) { res = i-1; break; }
        else if(x == u) { res = i; break; }
        else continue;
    }
    return res;
    */
    // Use Binary search technique
    if(x == 0 || x == 1) return x;
    long long int l = 1, h = x/2;
    int res;
    while(l <= h)
    {
        long long int mid = (l+h) / 2;
        long long int sq = mid * mid;
        if(sq == x) return mid;
        else if(sq < x) {
            res = mid; // possibility
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }
    return res;
}