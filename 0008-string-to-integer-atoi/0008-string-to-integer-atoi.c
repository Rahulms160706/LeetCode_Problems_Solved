int myAtoi(char* s) {
    int l = strlen(s);
    long long int n = 0,i = 0, num = 0;
    int ch;
    if(s[0] == '-'){i++; n = 1; }
    else if(s[0] == '+'){
        i++;
        n = 0;
    }
    while(s[i] == ' '){
        i++;
        if(s[i] == '-') {
            i++;
            n = 1;
            break;
        }
        else if(s[i] == '+'){
            i++;
            n = 0;
            break;
        }
    }
    int x;
    while(s[i] == '0'){
        i++;
        x = s[i] - '0';
        if(!(x >= 0 && x <= 9)) return 0;
    }
    int k = 0;
    for(int j = i;j<l;j++){
        ch = s[j]-'0';
        k++;
        if(!(ch >= 0 && ch <= 9)) break;
        else{
            if(k > 10 && n == 0){ return INT_MAX;}
            else if(k > 10 && n == 1) return INT_MIN;
            num = num*10 + ch; 
        }
    }
    if(num > INT_MAX && n==0){ return INT_MAX;}
    else if(n == 1) {
        num = -num;
        if(num <= INT_MIN) return INT_MIN;
    }
    return num;
}