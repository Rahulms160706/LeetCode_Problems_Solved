char st[10000]={0};
int top;

void push(char ch){
    top++;
    st[top] = ch;
}

char pop(){
    return st[top--];
}

int isempty(){
    if(top == -1) return 1;
    return 0;
}

bool isValid(char* s) {
    int l = strlen(s);
    int i = 0;
    top = -1;
    char c;
    while(i < l){
        char ch = s[i++];
        switch(ch){
            case '(':{
                push(ch); 
                break; 
            } 
            case '[':{
                push(ch); 
                break; 
            } 
            case '{':{
                push(ch); 
                break; 
            }
            case ')':
            {
                if(isempty()) return false;
                c = pop();
                if(c != '(') return false;
                break;
            }
            case ']':
            {
                if(isempty()) return false;
                c = pop();
                if(c != '[') return false;
                break;
            }
            case '}':
            {
                if(isempty()) return false;
                c = pop();
                if(c != '{') return false;
                break;
            }
        }
    }  
    printf("%d ",top);
    if(!isempty()){ printf("123"); return false; }
    return true;
}