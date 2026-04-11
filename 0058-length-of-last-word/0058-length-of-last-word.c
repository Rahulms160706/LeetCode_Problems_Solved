int lengthOfLastWord(char* s) {
    int l = strlen(s);
    int c = 0, f = 1, k = l-1;
    while(s[k] == ' ') k--;
    for(int i = k;i>=0;i--){
        if(s[i] == ' ') break;
        else c++;
    }
    return c;
}