int minBitFlips(int start, int goal) {
    int max = start > goal ? start : goal;
    int c = 0;
    int n1, n2;
    int d = 0;
    while(max > 0){
        d++;
        max /= 2;
    }
    while(d > 0){
        n1 = start & 1;
        n2 = goal & 1;
        if(n1 != n2) c++;
        start /= 2;
        goal /= 2;
        d--;
    }
    return c;
}