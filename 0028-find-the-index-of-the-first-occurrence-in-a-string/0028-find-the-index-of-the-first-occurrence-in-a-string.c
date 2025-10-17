int strStr(char* haystack, char* needle) {
    int l = strlen(needle);
    int tl = strlen(haystack);
    int res = -1;
    char *arr;
    for(int i = 0;i < (tl - l + 1);i++){
        int  k = 0;
        arr = (char *)malloc((l+1)*sizeof(char));
        for(int j = i;j < i+l;j++){
            arr[k] = haystack[j];
            k++;
        }
        arr[l] = '\0';
        if(!strcmp(arr,needle)){ res = i; break; }
    }
    if(res >= 0) return res;
    return -1;
}