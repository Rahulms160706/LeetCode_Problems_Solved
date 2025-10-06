int maxProfit(int* prices, int pricesSize) {
    /*
    int min = prices[0];
    int pos = 0;
    int f = 1;
    while(f){
    for(int i=1;i<pricesSize;i++){
        if(prices[i] < min){
            min = prices[i];
            pos = i;
            f = 0;
        }
    }
    if(pos + 1 == pricesSize) f = 1;
    }
    int max = prices[pos+1];
    int high = 0;
    for(int j = pos+1;j < pricesSize;j++){
        if(prices[j] > max){
            max = prices[j];
            high = j+pos;
        }
    }
    int p = 0;
    p =max - min;
    return p;
    */
    /* time limit exceeded
    int p = 0;
    if(pricesSize == 0 || pricesSize == 1) return 0;
    p = prices[1] - prices[0];
    for(int i=0;i<pricesSize;i++){
        int n = prices[i];
        for(int j=i;j<pricesSize;j++){
            if((prices[j] - n) > p){
                p = prices[j] - n;
            }
        }
    }
    return p;
    */
    int p = 0;
    int min = prices[0];
    if(pricesSize == 0 || pricesSize == 1) return 0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i] < min){
            min = prices[i];
        }
        int diff = prices[i] - min;
        if(diff > p) p = diff;
    }
    return p;
}