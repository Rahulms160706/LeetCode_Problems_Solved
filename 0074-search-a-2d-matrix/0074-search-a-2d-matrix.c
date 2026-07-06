bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int row = -1;
    for(int i = 0;i<matrixSize;i++){
        if(matrix[i][0] <= target && matrix[i][matrixColSize[i]-1] >= target){
            row = i;
            break;
        }
    }
    printf("%d\n",row);
    if(row == -1) row = matrixSize-1;
    for(int i = 0;i<matrixColSize[row];i++){
        if(matrix[row][i] == target) return true;
    }
    return false;
}