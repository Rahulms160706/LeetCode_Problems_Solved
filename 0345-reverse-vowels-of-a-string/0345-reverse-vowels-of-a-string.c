int isvowel(char ch){
    char c = tolower(ch);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    return 0;
}

char* reverseVowels(char* s) {
    int l = strlen(s);
    char v[l+1];
    int j = 0;
    for(int i =0;i<l;i++){
        if(isvowel(s[i])) v[j++] = s[i];
    }
    v[l] = '\0';
    int len = j;
    int le = 0, r = j-1;
    while(l < r){
        char temp = v[le];
        v[le] = v[r];
        v[r] = temp;
        le++; r--;
    }
    j = len-1;
    for(int i =0;i < l && j >= 0;i++){
        if(isvowel(s[i])){
            s[i] = v[j--];
        }
    }
    return s;
}