/* gives tle :( 
int maxOperations(char* s) {
    int l = strlen(s);
    int count = 0;
    int i = 0;
    while(i < l-1){
        if(s[i] == '1' && s[i+1] == '0'){
            int k = i+1;
            while(i < l-1 && k < l && s[k] != '1'){
                int temp = s[i];
                s[i] = s[k];
                s[k] = temp;
                i=k;
                k=i+1;
            }
            count++;
            int j = 0;
            while(s[j] == '0') j++;
            i = j;
            continue;
        }
        else
        i++;
    }
    return count;
}
*/
int maxOperations(char* s) {
    long long int n_1 = 0;
    long long int res = 0;
    int l =strlen(s);
    for(int i = 0;i<l;i++){
        if(s[i] == '1') n_1++;
        else if(s[i] == '0' && n_1 > 0){
            while(s[i] != '1' && i < l) i++;
            if(s[i] == '1') i--;
            res += n_1;
        }
    }
    return res;
}