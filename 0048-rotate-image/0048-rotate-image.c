void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i = 0;i < matrixSize;i++){
        for(int j = i+1;j < matrixColSize[0];j++){
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
    int x = matrixColSize[0];
    for(int i = 0;i < matrixSize;i++){
        for(int j = 0;j < matrixColSize[0]/2;j++){
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[i][x-j-1];
            matrix[i][x-j-1] = tmp;
        }
    }
}