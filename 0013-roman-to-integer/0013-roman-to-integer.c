int romanval(char ch)
{
    switch(ch)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
    }
}

int romanToInt(char* s) {
    int l = strlen(s);
    int num=0;
    int i=0;
    while(i!=l){
        if(romanval(s[i]) < romanval(s[i+1])){ 
            num += (romanval(s[i+1]) - romanval(s[i])); i++; }
        else num += romanval(s[i]); 
        i++; 
    }
    return num;
}