int hammingDistance(int x, int y) {
    int max = x > y ? x : y;
    int c = 0;
    int n1, n2;
    int d = 0;
    while(max > 0){
        d++;
        max /= 2;
    }
    while(d > 0){
        n1 = x & 1;
        n2 = y & 1;
        if(n1 != n2) c++;
        x /= 2;
        y /= 2;
        d--;
    }
    return c;
}