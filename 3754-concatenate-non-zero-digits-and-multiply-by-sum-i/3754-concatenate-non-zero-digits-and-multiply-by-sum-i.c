long long sumAndMultiply(int n) {
    long long int cpy = n;
    long long int nn = 0;
    long long int final = 0;
    int i = 0;
    while(cpy > 0){
        int r = cpy % 10;
        if(r == 0){
            cpy /= 10;
            continue;
        }
        else{
            nn = nn + (r * pow(10,i));
            i++;
            cpy /= 10;
        }
    }
    if(nn == 0) return 0;
    cpy = nn;
    while(cpy > 0){
        int r = cpy % 10;
        final = final + (r * nn);
        cpy /= 10;
    }
    return final;
}