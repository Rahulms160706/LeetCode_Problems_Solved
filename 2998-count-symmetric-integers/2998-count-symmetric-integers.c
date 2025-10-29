/* 104ms :(
int check(char num[],int l){
    int s1=0,s2=0;
    for(int i=0;i<l/2;i++){
        s1 += num[i]-'0';
    }
    for(int i=l/2;i<l;i++){
        s2 += num[i]-'0';
    }
    return s1 == s2;
}

int countSymmetricIntegers(int low, int high) {
    char num[10000];
    int c =0;
    for(int i = low;i<=high;i++){
        snprintf(num,sizeof(num),"%d",i);
        int l = strlen(num);
        if(l%2 != 0) continue;
        int ch = check(num,l);
        if(ch == 1) c++;
    }
    return c;
}
*/

int countSymmetricIntegers(int low, int high) {
    int lmao=0;
    for(int i=low;i<=high;i++){
        int l=log10(i)+1;
        int x=i;
        if(l&1)continue;
        else{
            int s=0,t=0;
             for(int j=0;j<l/2;j++,x/=10){s+=x%10;}
             for(int j=l/2;j<l;j++,x/=10){t+=x%10;}
             if(s==t)lmao++;
        }
    }
    return lmao;
}
