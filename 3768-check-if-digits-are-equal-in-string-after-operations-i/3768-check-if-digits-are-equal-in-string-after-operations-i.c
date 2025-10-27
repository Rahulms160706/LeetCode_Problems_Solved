bool hasSameDigits(char* s) {
    int l = strlen(s);
    int i;
    while(l>2){
        for(i=0;i<l-1;i++){
            s[i] = (((s[i] - '0') + (s[i+1] - '0')) % 10) + '0';
        }
        s[i] = '\0';
        l = strlen(s);
    }
    return s[0] == s[1];
}