int minimumDistance(int* nums, int numsSize) {
    if(numsSize<3) return -1;
    
    int freq[101] = {0};
    int min= INT_MAX;
    for(int i= 0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    for(int i = 0;i<101;i++){
        if(freq[i] == 3){
            int arr[3] ={0};
            int k=0;
            for(int j= 0;j<numsSize;j++){
                if(nums[j] == i && k< 3){
                    arr[k++] = j;
                }
            }
            int dis = (abs(arr[0]-arr[1])) + (abs(arr[1]-arr[2])) + (abs(arr[2]-arr[0]));
            if(dis < min) min = dis;
            
        }
        else if(freq[i] >= 3){
            for(int r = 0;r<numsSize;r++){
                int arr[3] ={-1};
                int k=0;
                for(int j = r;j<numsSize;j++){
                    if(nums[j] == i && k< 3){
                        arr[k++] = j;
                    }
                }
                if(arr[0] == -1 || arr[1] == -1 || arr[2] == -1) break;
                int dis = (abs(arr[0]-arr[1])) + (abs(arr[1]-arr[2])) + (abs(arr[2]-arr[0]));
                if(dis <= min) min = dis;
            }
        }
    }
    if(min == INT_MAX) return -1;
    return min;
}