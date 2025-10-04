char* longestCommonPrefix(char** strs, int strsSize) {
    int l = strlen(strs[0]);
    char *nw = malloc((l+1)*sizeof(char));
    strcpy(nw,strs[0]);
    for(int k=1;k<strsSize;k++)
    {
        char w2[strlen(strs[k])+1];
        strcpy(w2,strs[k]);
        int i=0,j=0;
        while(nw[i]!='\0' && w2[i]!= '\0' && nw[i] == w2[i])
        {
            nw[j++] = w2[i];
            i++;
        }
        nw[j] = '\0';
    }
    return nw;
}