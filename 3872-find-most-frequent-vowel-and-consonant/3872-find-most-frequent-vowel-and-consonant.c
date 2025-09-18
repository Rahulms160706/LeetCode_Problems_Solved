typedef struct frequent{
    char letter;
    int count;
}F;

int isvowel(char ch)
{
    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': return 1;
        default : return 0;
    }
}

int maxFreqSum(char* s) {
    int l = strlen(s);
    F freq[l];
    int size = 0;
    for (int i = 0; i < l; i++) {
        char ch = s[i];
        int repeat = 0;
        for (int k = 0; k < size; k++) {
            if (freq[k].letter == ch) {
                freq[k].count++;
                repeat = 1;
            }
        }
        if (!repeat) {
            freq[size].letter = ch;
            freq[size].count = 1;
            size++;
        }
    }
    int maxv = 0;
    int maxc = 0;
    for(int i=0;i<size;i++)
    {
        if(isvowel(freq[i].letter)){ if(freq[i].count > maxc) maxc = freq[i].count; }
        else{ if(freq[i].count > maxv) maxv = freq[i].count; }
    }
    return (maxv + maxc);
}