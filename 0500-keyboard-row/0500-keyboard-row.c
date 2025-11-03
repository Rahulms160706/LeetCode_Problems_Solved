/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
    char r1[] = "qwertyuiop";
    char r2[] = "asdfghjkl";
    char r3[] = "zxcvbnm";
    int count = 0;
    char **nw = malloc(wordsSize*sizeof(char*));
    int arr[26] = {0};
    for(int i = 0;i<strlen(r1);i++) arr[r1[i]-'a'] = 1;
    for(int i = 0;i<strlen(r2);i++) arr[r2[i]-'a'] = 2;
    for(int i = 0;i<strlen(r3);i++) arr[r3[i]-'a'] = 3;
    for(int i = 0;i<wordsSize;i++){
        char w[100];
        strcpy(w,words[i]);
        int k,f= 1;
        if(w[0] >= 'A' && w[0] <= 'Z') k = arr[w[0]+32-'a'];
        else k = arr[w[0]-'a'];
        for(int j = 1;j<strlen(w);j++){
            if(w[j] >= 'A' && w[j] <= 'Z'){
                if(arr[w[j]+32-'a'] != k) {
                    f = 0;
                    break;
                }
            }
            else if(arr[w[j]-'a'] != k){ f = 0; break; }
        }
        if(f){
            nw[count] = malloc(strlen(w)+1);
            strcpy(nw[count],w);
            count++;
        }
    }
    *returnSize = count;
    return nw;
}