int smallestNumber(int n) {
    int x = 3;
    if(n == 1) return 1;
    int j = 2;
    if(x >= n) return x;
    while(x < n){
        x = x + pow(2,j);
        j++;
    }
    return x;
}