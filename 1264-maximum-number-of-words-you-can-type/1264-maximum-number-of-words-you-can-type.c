int canBeTypedWords(char* text, char* brokenLetters) {
    int len = strlen(brokenLetters);
    int l = strlen(text);
    int count = 0;
    int size = 0;
    char word[1000];
    for(int i=0;i<l+1;i++)
    {
        char ch = text[i];
        if(ch != ' ' && ch != '\0') word[size++] = ch;
        else if(size > 0)
        {
            word[size] = '\0';
            int f=0;
            for(int j=0;j<size;j++)
            {
                int d=0;
                while(d < len)
                {
                    char c = brokenLetters[d];
                    if(c == word[j]){ f = 1; break; }
                    d++;
                }   
            }
            if(!f) count++; 
            size = 0;
        }
    }
    return count;
}