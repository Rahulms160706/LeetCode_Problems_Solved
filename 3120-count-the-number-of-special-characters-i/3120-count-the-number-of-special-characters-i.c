int numberOfSpecialChars(char* word) {
    int alpha[26] = {0};
    for(int i = 0;word[i] != '\0';i++){
        char ch = word[i] < 'a' ? (word[i] + 32):(word[i] - 32);
        for(int j = i+1;word[j] != '\0';j++){
            if(word[j] == ch){
                if(ch < 'a') alpha[ch - 'A'] = 1;
                else alpha[ch - 'a'] = 1;
            } 
        }
    }
    int c = 0;
    for(int i = 0;i<26;i++){
        if(alpha[i] == 1) c++;
    }
    return c;
}