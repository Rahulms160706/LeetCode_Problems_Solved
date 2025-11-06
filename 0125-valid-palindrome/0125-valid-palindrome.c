bool isPalindrome(char* s) {
    int l = strlen(s);
    char cpy[l+1];
    char arr[l+1];
    int j = 0;
    for(int i = 0;i<l;i++){
        char ch = s[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            cpy[j] = tolower(ch);
            j++;
        }
    }
    cpy[j] = '\0';
    int l1 = j;
    j = 0;
    for(int i = l-1;i>=0;i--){
        char ch = s[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            arr[j] = tolower(ch);
            j++;
        }
    }
    arr[j] = '\0';
    int l2 = j;
    
    // if(cpy == NULL && arr == NULL && l1 == l2) return true;
    // if(l1 == l2){
    //     for(int i = 0;i<l1;i++){
    //         if(cpy[i] != arr[i]) return false;
    //     }
    // }
    return strncmp(cpy,arr,j) == 0;
}