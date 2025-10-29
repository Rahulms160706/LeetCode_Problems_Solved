int convert(int num, int base){
    int sum = 0;
    while(num > 0){
        sum = sum*10 + num % base;
        num /= base;
    }
    return sum;
}

int sumBase(int n, int k) {
    int x = convert(n,k);
    int ds = 0;
    while(x > 0){
        ds += x%10;
        x/=10;
    }
    return ds;
}