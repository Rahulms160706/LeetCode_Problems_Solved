/* 160+ ms
bool isemp(int *n,int ns){
    for(int i=0;i<ns;i++)if(n[i])return false;
    return true;
}

int left(int *n,int ns,int x){
    int d=-1;
    int i=x;
    while(i>=0 && i<ns){
        if (n[i]==0){
            i+=d;
            if (i < 0 || i >= ns) break;
        }
        else{
            n[i]--;
            d*=-1;
            i+=d;
            if (i < 0 || i >= ns) break;
        }
    }
    return isemp(n,ns);
}

int right(int *n,int ns,int x){
    int d=1;
    int i=x;
    while(i>=0 && i<ns){
        if (n[i]==0){
            i+=d;
            if (i < 0 || i >= ns) break;
        }
        else{
            n[i]--;
            d*=-1;
            i+=d;
            if (i < 0 || i >= ns) break;
        }
    }
    return isemp(n,ns);

}

int countValidSelections(int* nums, int numsSize) {
    int c=0;
    int n1[numsSize];
    int n2[numsSize];
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            for(int j=0;j<numsSize;j++) n1[j]=nums[j];
            c+=left(n1,numsSize,i);
            for(int j=0;j<numsSize;j++)n2[j]=nums[j];
            c+=right(n2,numsSize,i);
        }
    }
    return c;
}
*/

int check(int *nums, int numsSize, int i){
    int ls = 0, rs = 0;
    for(int p=0;p<i;p++){
        ls = ls+nums[p];
    }
    for(int p=i;p<numsSize;p++){
        rs = rs+nums[p];
    }
    if(ls == rs) return 2;
    else if(ls+1 == rs || rs+1 == ls) return 1;
    return 0;
}

int countValidSelections(int* nums, int numsSize) {
    int res = 0;
    for(int i=0;i<numsSize;i++){
        if(nums[i] == 0){
            res += check(nums,numsSize,i);
        }
    }
    return res;
}
