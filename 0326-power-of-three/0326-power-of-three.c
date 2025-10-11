long long int recursion(long long int num, int pow, long long int cmp){
    if(num < INT_MIN || num > INT_MAX) return false;
    if(num == cmp) return true;
    else if(num > cmp) return false;
    else{
        return recursion(num*3,pow+1,cmp);
    }
}

bool isPowerOfThree(int n) {
    if(n == 0 || n < 0) return false;
    int cmp = n;
    if(n == 1) return true;
    return recursion(3, 1, cmp);
}