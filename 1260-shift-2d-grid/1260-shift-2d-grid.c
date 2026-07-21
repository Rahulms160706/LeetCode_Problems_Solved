/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void no_manual(int **res, int r, int **grid, int m, int n, int *f){
    r = r % m;
    if(r != 0){
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                res[i][j] = grid[(m - r + i) % m][j];
            }
        }
        *f = 1;
    }
    else *f = 0;
}

void change(int **res, int **grid, int m, int n){
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            grid[i][j] = res[i][j];
        }
    }
}

void manual(int **res, int k, int **grid, int m, int n){
    for(int i = 0;i<m;i++){
        int cp = k;
        int a = (m - 1 + i) % m;
        for(int j = 0;j<n;j++){
            if(cp == 0){
                a = i;
            }
            res[i][j] = grid[a][(n - k + j) % n];
            cp--;
        }
    }
}

int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) {
    // Malloc allocation
    *returnSize = gridSize;
    int **res = (int **)malloc(*returnSize * sizeof(int*));
    *returnColumnSizes = (int *)malloc(gridSize * sizeof(int));
    for(int i = 0;i<gridSize;i++){
        (*returnColumnSizes)[i] = gridColSize[i];
        res[i] = (int *)malloc((*returnColumnSizes)[i] * sizeof(int));
    }

    // Implement part
    int m = gridSize;
    int n = gridColSize[0];
    int rot = 0;
    if(k < n){
        manual(res, k, grid, m, n);
    }
    else{
        rot = floor(k / n);
        int f = 0;
        no_manual(res, rot, grid, m, n, &f);
        if(f == 1) change(res, grid, m, n);
        if(k % n != 0){
            manual(res, k % n, grid, m, n);
        }
        else return grid;
    }
    return res;
}