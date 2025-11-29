int minOperations(int* nums, int numsSize, int k) {
    int total = 0;
    for(int i=0; i<numsSize;i++){
        total += nums[i];
    }
    if(total%k==0) return 0;
    int f = 1,c=1;
    int p=0;
    while(f){
        p=k*c;
        if(p>total){
            c--;
            f=0;
            break;
        }
        c++;
    }
    return (total-(k*c));
}