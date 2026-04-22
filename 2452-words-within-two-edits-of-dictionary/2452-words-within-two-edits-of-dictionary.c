/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** twoEditWords(char** queries, int queriesSize, char** dictionary, int dictionarySize, int* returnSize) {
    int index[queriesSize];
    for(int i = 0;i<queriesSize;i++) index[i] = 0;
    int l = strlen(dictionary[0]);
    int p = 0;
    for(int i = 0;i<dictionarySize;i++){
        for(int j = 0;j<queriesSize;j++){
            int k = 0, c = 0;
            while(k != l){
                if(queries[j][k] == dictionary[i][k]) c++;
                k++;
            }
            if(l- c <= 2) index[j]++;
        }
    }
    int x = 0;
    for(int i = 0;i<queriesSize;i++){
        if(index[i] != 0) x++;
    }
    *returnSize = x;
    char **final = (char**)malloc((*returnSize) * sizeof(char*));
    for(int i = 0;i<*returnSize;i++){
        final[i] = (char*)malloc((l+1) * sizeof(char));
    }
    x = 0;
    for(int i = 0;i<queriesSize && x < (*returnSize);i++){
        if(index[i] > 0) strcpy(final[x++],queries[i]);
    }
    return final;
}