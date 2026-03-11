int bitwiseComplement(int n) {
    int final = 0;
    int i = 0;
    if(n == 0) return 1;
    while(n > 0){
        int x = n % 2;
        if(x & 1){
            i++;
            n /= 2;
            continue;
        } 
        else final = final + pow(2,i);
        i++; 
        n /= 2;
    }
    return final;
}