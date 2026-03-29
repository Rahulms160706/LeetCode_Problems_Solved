void swap(char **c1, int i, int j){
    char ch = (*c1)[i];
    (*c1)[i] = (*c1)[j];
    (*c1)[j] = ch;
}

int check(char *s1, char *s2){
    for(int i = 0;i<4;i++){
        if(s1[i] != s2[i]) return -1;
    }
    return 1;
}

bool canBeEqual(char* s1, char* s2) {
    int x = check(s1, s2);
    if(x == -1){
        swap(&s1, 0, 2);
        x = check(s1,s2);
        if(x == -1){
            swap(&s1, 0, 2);
            swap(&s1, 1, 3);
            x = check(s1,s2);
            if(x == -1){
                swap(&s1, 0, 2);
                x = check(s1,s2);
                if(x == -1) return false;
                else return true;
            }
            else return true;

        }
        else return true;
    }
    else return true;
}