void reverseString(char* s, int sSize) {
    char cpy[sSize+1][1];
    int j = 0;
    for(int i = sSize-1;i>=0;i--){
        cpy[j++][0] = s[i];
    }
    cpy[sSize][0] = '\0';
    for(int i = 0;i<sSize;i++) s[i] = cpy[i][0];
}