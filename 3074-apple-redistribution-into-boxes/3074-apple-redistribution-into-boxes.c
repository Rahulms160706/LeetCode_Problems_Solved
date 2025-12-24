int cmp(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int t = 0;
    for(int i = 0;i<appleSize;i++){
        t += apple[i];
    }
    int cpy[capacitySize];
    for(int i = 0;i<capacitySize;i++){
        cpy[i] = capacity[i];
    }
    qsort(cpy,capacitySize,sizeof(int),cmp);
    int s = 0, i = 0,c = 0;
    while(s < t){
        s += cpy[i];
        c++;
        i++;
    }
    return c;
}