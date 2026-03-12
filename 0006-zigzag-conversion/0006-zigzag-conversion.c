char* convert(char* s, int numRows) {
    if(numRows == 1) return s;
    int cycle = numRows * 2 - 2;
    int bs = cycle, abs = 0;
    int l = strlen(s);
    char *ans = (char*)malloc((l+1)*sizeof(char));
    int j = 0;
    for(int i = 0;i<numRows;i++){
        int x = i;
        if(abs == 0 || bs == 0){
            while(x < l){
                ans[j++] = s[x];
                x += cycle;
            }
        }
        else if(abs > 0){
            while(x < l){
                if(x < l) ans[j++] = s[x];
                if(x + bs < l) ans[j++] = s[x+bs];
                x += cycle;
            }
        }
        abs += 2;
        bs = cycle - abs;
    }
    ans[l] = '\0';
    return ans;
}