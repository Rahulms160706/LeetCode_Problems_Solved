/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int brr[arrSize];
    for(int i=0;i<arrSize;i++)brr[i]=0;
    for(int i=0;i<arrSize;i++){
        int n=arr[i];
        int s=0;
        while(n>0){
            if(n%2)s++;
            n/=2;
        }
        brr[i]=s;
    }
    int * out=(int *)malloc(sizeof(int)*arrSize);
    for(int i=0;i<arrSize;i++)out[i]=arr[i];
    for(int i = 1; i < arrSize; i++){

        int keyBits = brr[i];
        int keyVal  = out[i];

        int j = i - 1;

        while(j >= 0 &&(brr[j] > keyBits || (brr[j] == keyBits && out[j] > keyVal))) {
            brr[j + 1] = brr[j];
            out[j + 1] = out[j];
            j--;
        }

        brr[j + 1] = keyBits;
        out[j + 1] = keyVal;
    }
    *returnSize=arrSize;
    return out;
}