/*
int security(char w[], int l){
    int c = 0;
    for(int i=0;i<l;i++){
        if(w[i] == '1') c++;
    } return c;
}

int numberOfBeams(char** bank, int bankSize) {
    int res = 0;
    int i = 0,j = 0,m,n;
    while(i < bankSize-1){
        m = security(bank[i],strlen(bank[i]));
        if(m == 0){ i++; continue; }
        else{
            i++;
            j = i;
            n = security(bank[j],strlen(bank[j]));
            while(n==0 && j < bankSize){
                n = security(bank[j],strlen(bank[j]));
                j++;
            }
            res += (m*n);
        }
        
    }
    return res;
}
*/
int numberOfBeams(char** bank, int bankSize) {
    int s=0;
    int p=0;
    for(int i=0;i<bankSize;i++){
        int c=0;
        int n=strlen(bank[i]);
        for(int j=0;j<n;j++){
            if(bank[i][j]=='1')c++;
        }
        if(c){
            s+=c*p;
            p=c;
        }
    }
    return s;
}
