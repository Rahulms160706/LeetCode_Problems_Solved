char* findDifferentBinaryString(char** nums, int numsSize) {
    int l = strlen(nums[0]);
    char *res = (char*)malloc((l+1) * sizeof(char));

    int max = 0;
    int cp = l-1;
    while(cp >= 0){
        int r = pow(2,cp);
        max += r;
        cp--;
    }
    int len = max + 1;

    int n[len];
    for(int i = 0;i<len;i++) n[i] = -1;

    for(int i = 0;i<numsSize;i++){
        cp = l - 1;
        int numb = 0;
        int j = 0;
        while(cp >= 0){
            int r = ((int)nums[i][j] - 48) * pow(2,cp);
            numb += r;
            cp--; j++;
        }
        n[numb] = numb;
    }

    int miss = 0;
    for(int i = 0;i<len;i++){
        if(n[i] == -1){
            miss = i;
            break;
        }   
    }

    for(int i = 0;i<l;i++){
        res[l-i-1] = (char)((miss % 2) + 48);
        miss /= 2;
    }
    res[l] = '\0';
    return res;
}