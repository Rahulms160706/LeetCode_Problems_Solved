/* too much time
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
*/
// using max heap

void maxheap(int *h, int n){
    int i,j,key;
    for(int k = 1;k<n;k++){
        i = k;
        j = (i-1)/2;
        key = h[i];
        while(i > 0 && h[j] < key){
            h[i] = h[j];
            i = j;
            j = (i-1)/2;
        }
        h[i] = key;
    }
}

void adjust(int *h, int *n){
    int j = 0;
    int i = 2*j + 1;
    int key = h[j];
    while(i < *n){
        if(i+1 < *n) if(h[i+1] > h[i]) i++;
        if(h[i] > key){
            h[j] = h[i];
            j = i;
            i = 2*j+1;
        }
        else break;
    }
    h[j] = key;
}

int delete(int *h, int *n){
    int t = h[0];
    h[0] = h[--(*n)];
    adjust(h,n);
    return t;
}

long long maximumHappinessSum(int* happiness, int happinessSize, int k) {
    long long int t = 0;
    maxheap(happiness,happinessSize);
    int i = 0;
    while(k && happinessSize){
        int x = delete(happiness,&happinessSize);
        int val = x - i++;
        if(val <= 0) break;
        t += val;
        k--;
    }
    return t;
}