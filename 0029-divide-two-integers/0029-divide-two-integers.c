int divide(int dividend, int divisor) {
    if(dividend == INT_MIN && divisor == -1) return INT_MAX; // special case overflow
    long long int a = llabs((long long)dividend); // llabs to convert to long int to abs value
    long long int b = llabs((long long)divisor);
    long long int result = 0;
    while(a >= b){
        long long int temp = b;
        long long int multiple = 1;
        while((temp << 1) <= a){
            temp <<= 1; // temp = temp * 2
            multiple <<= 1; // multiple = multiple * 2
        }
        a -= temp; // will subtract the closest number to the given value
        result += multiple;
    }
    if((dividend < 0) ^ (divisor < 0)) result = -result; // handle signs

    return (int)result; // Cast back to int (safe because we handled overflow)
}