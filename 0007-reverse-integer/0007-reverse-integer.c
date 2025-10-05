int reverse(int x){
    long long int r = 0;
    if(x > INT_MAX || x < INT_MIN) return 0;
    while(x != 0){
        int d = x%10;
        r = (r*10) + d;
        if(r>INT_MAX || r<INT_MIN) return 0;
        x/=10;
    }
    return r;
}