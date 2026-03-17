int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize-1;
    int max = 0;
    while(i < j){
        int p = height[i] < height[j] ? (height[i] * (j - i)) : (height[j] * (j - i));
        if(p > max) max = p;
        if(height[i] < height[j]) i++;
        else if(height[i] >= height[j]) j--;
    }
    return max;
}