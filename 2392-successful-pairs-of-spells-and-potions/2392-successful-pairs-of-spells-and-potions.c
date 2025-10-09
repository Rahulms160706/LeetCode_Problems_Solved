/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
int cmp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
qsort(arr,lenarr,sizeof(int),cmp); // inside the function
*/
/* runtime error
    int k=0;
    *returnSize = spellsSize;
    int *arr = (int*)malloc(spellsSize*sizeof(int));
    for(int i=0;i<spellsSize;i++){
        int c = 0;
        for(int j=0;j<potionsSize;j++){
            if(spells[i] * potions[j] >= success)
                c++;
        }
        arr[k++] = c;
    }
    return arr;
    */

int cmp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}

int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    qsort(potions,potionsSize,(sizeof(int)),cmp);
    int k=0;
    *returnSize = spellsSize;
    int *arr = (int*)malloc(spellsSize*sizeof(int));
    int j = 0;
    while(j < spellsSize){
        long long int l = 0, h = potionsSize - 1;
        long long int ind = potionsSize;
        while(l <= h){
            long long int x = (l+h)/2;
            long long int mid = potions[x];
            if(mid*spells[j] == success) ind = x;
            if(mid*spells[j] < success){
                l = x+1;
            } 
            else if(mid*spells[j] >= success){
                h = x-1;
                ind = x;
            }
        }
        if (ind == potionsSize) {
            arr[j] = 0; 
        } else {
            arr[j] = potionsSize - ind;
        }
        j++;
    }
    return arr;
}
