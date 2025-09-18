bool isPalindrome(int x) {
    if(x<0) return false;
    long long int cp = x;
    long long int rev = 0;
    while(cp != 0)
    {
        long long int d = cp%10;
        rev = (rev*10) + d;
        cp /= 10;
    }
    if(rev == x) return true;
    else return false;
}