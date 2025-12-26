int bestClosingTime(char* customers) {
    int y = 0, n = 0;
    int l = strlen(customers);
    int final = 0;
    for(int i = 0;i<l;i++) if(customers[i] == 'Y') y++;
    int min = y;
    int p = y;
    for(int i = 0;i<l;i++){
        if(customers[i] == 'Y') p--;
        else p++;
        if(p < min) {
            min = p;
            final = i+1;
        }
    }
    return final;
}