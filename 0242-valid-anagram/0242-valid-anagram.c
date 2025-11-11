bool isAnagram(char* s, char* t) {
    int freq1[50001]={0}, freq2[50001] = {0};
    int l1 = strlen(s);
    int l2 = strlen(t);
    if(l1 != l2) return false;
    for(int i = 0;i<l1;i++) freq1[s[i]-'a']++;
    for(int i = 0;i<l1;i++) freq2[t[i]-'a']++;
    for(int i = 0;i<50001;i++){
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}