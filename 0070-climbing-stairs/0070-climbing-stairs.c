int climbStairs(int n) {
    /* time limit exceeded :,)
    if(n == 1) return 1;
    if(n == 2) return 2;
    return climbStairs(n-1) + climbStairs(n-2);
    */
    if(n == 1) return 1;
    if(n == 2) return 2;
    int a = 1,b = 1,c=0;
    for(int i=2;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}