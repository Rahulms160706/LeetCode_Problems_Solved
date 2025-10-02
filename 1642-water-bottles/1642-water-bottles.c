int numWaterBottles(int numBottles, int numExchange) {
    if (numBottles <= 0) return 0;
    if (numExchange <= 1) return -1;
    int total = 0;
    int empties = 0;
    int full = numBottles;
    while (full > 0) {
        total += full;        
        empties += full;      
        full = empties / numExchange; 
        empties %= numExchange; 
    }
    return total;
}
