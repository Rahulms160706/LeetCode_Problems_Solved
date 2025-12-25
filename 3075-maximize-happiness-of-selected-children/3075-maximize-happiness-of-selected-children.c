int cmp(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

long long maximumHappinessSum(int* happiness, int happinessSize, int k) {
    qsort(happiness,happinessSize,sizeof(int),cmp);
    long long int t = happiness[0];
    k--;
    long long int i = 1;
    while(k){
        long long int val = (happiness[i] - (i++));
        if(val >= 0)
        t += val;
        k--;
    }
    return t;
}