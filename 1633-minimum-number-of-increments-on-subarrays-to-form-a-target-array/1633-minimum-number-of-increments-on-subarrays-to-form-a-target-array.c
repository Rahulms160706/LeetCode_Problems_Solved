/*
int stk[100000];
int top = -1;

void push(int x){
    top++;
    if(top < 100000){
        stk[top] = x;
    }
}

int pop(){
    return stk[top--];
}

int stkempty(){
    if(top == -1) return 1;
    return 0;
}

int issame(int *target, int len){
    for(int i =0;i <len;i++){
        if(target[i] != 1) return 0;
    }
    return 1;
}

int min(int *target, int end, int si){
    int m = target[0];
    for(int k = si;k<end;k++){
        if(target[k] < m) m = target[k];
    }
    return m>=2 ? m-1 : 1;
}

int minNumberOperations(int* target, int targetSize) {
    int c = 0;
    int j;
    while(!issame(target,targetSize)){
        int si = -1;
        for(int i=0;i<targetSize;i++){
            if(target[i] > 1){
                if(si == -1) si = i;
                push(i);
                
                // target[i] -= 1;
                // if((i+1) < targetSize) if(target[i+1] > 1) continue;
                // else break;
            }
            else if(target[i] == 1 && !stkempty() && si!=-1){
                int m = min(target,i,si);
                while(!stkempty()){
                    j = pop();
                    target[j] -= m;
                }
                c += m;
                si = -1;
            }
        }
    }
    return c+1;
}
*/
int minNumberOperations(int* target, int targetSize) {
    int c = target[0];  // ✅ start from first element directly
    for (int i = 1; i < targetSize; i++) {
        if (target[i] > target[i-1]) {  // ✅ only when next is larger
            c += (target[i] - target[i-1]);
        }
    }
    return c;  // ✅ no while(), no stack, no issame()
}
