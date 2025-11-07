int compare(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

char* sortVowels(char* s) {
    int n = strlen(s);
    char *res = (char*)malloc((n + 1) * sizeof(char));
    int freq[256] = {0};
    for(int i = 0;i<n;i++){
        if(isvowel(s[i])) freq[s[i]]++;
    }
    char v[] = "AEIOUaeiou";
    int j = 0;
    for(int i=0;i<n;i++){
        if(!isvowel(s[i])) res[i] = s[i];
        else{
            while(freq[v[j]] == 0) j++;
            res[i] = v[j];
            freq[v[j]]--;
        }
    }
    res[n] = '\0';
    return res;
}