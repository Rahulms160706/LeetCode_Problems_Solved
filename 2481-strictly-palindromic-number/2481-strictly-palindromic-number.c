bool isStrictlyPalindromic(int n) {
    int x = 2;
    int i = 0;
    while(x < n-2){
        long long int num = 0;
        int c = 0;
        while(n > 0){
            int d = n%x;
            num = num*10 + d;
            n = n/x;
            c++;
        }
        long long int rev = 0;
        while(num > 0){
            int d = num%10;
            rev = rev*10 + d;
            num /= 10;
        }
        if(num == rev) return true;
        else break; 
        x++;
    }
    return false;
}