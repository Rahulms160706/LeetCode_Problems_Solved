int closestTarget(char** words, int wordsSize, char* target, int startIndex) {
    int c = 0;
    for(int i = 0;i<wordsSize;i++){
        if(strcmp(words[i],target) == 0) c++;
    }
    if(c == 0) return -1;
    int ind[c], k = 0;
    for(int i = 0;i<wordsSize;i++){
        if(strcmp(words[i],target) == 0) ind[k++] = i;
    }
    int min = INT_MAX;
    for(int i = 0;i<k;i++){
        if(ind[i] < startIndex){
            int d1 = startIndex - ind[i];
            int d2 = (wordsSize - startIndex) + ind[i];
            int x = (d1 < d2) ? d1 : d2;
            if(x < min) min = x;
        }
        else{
            int d1 = ind[i] - startIndex;
            int d2 = startIndex + (wordsSize - ind[i]);
            int x = (d1 < d2) ? d1 : d2;
            if(x < min) min = x;
        }
    }
    return min;
}