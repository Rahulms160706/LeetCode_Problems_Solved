/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *arr = (int *)malloc((digitsSize+1)*sizeof(int));
    for(int i = 0;i<digitsSize+1;i++) arr[i] = 0;
    int c = 1;
    int edge = 0;
    for(int i = 0;i<digitsSize;i++){
        if(digits[i] != 9) edge = 1;
    }
    if(edge){
        for(int  i = digitsSize-1;i>=0;i--){
            int x = digits[i] + c;
            arr[i] = (x % 10);
            c = x / 10;
        }
        if(arr[digitsSize] == 0) *returnSize = digitsSize;
        else{
            arr[digitsSize] = c;
            *returnSize = digitsSize + 1;
        } 
    }
    else{ 
        arr[0] = 1;
        *returnSize = digitsSize + 1;
    }
    return arr;
}