int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int sum = 0;
    for(int i = 0;i<neededTimeSize;i++){
        sum += neededTime[i];
    }
    for(int i = 0;i<neededTimeSize;i++){
        char ch = colors[i];
        int max = neededTime[i];
        int j = i+1;
        while(ch == colors[j]){
            if(neededTime[j] > max) max = neededTime[j];
            j++;
        }
        i = j-1;
        sum-=max;
    }
    return sum;
}