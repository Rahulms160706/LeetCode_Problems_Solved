int maximumEnergy(int* energy, int energySize, int k) {
    int max = INT_MIN;
    int dp[energySize];
    for(int i = energySize-1;i>=0;i--){
        if((i+k) < energySize){
            dp[i] = energy[i] + dp[i+k];
        }
        else dp[i] = energy[i];
        if(dp[i] > max) max = dp[i];
    }
    return max;
}