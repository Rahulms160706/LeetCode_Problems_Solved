int countUnguarded(int m, int n, int** guards, int guardsSize, int* guardsColSize, int** walls, int wallsSize, int* wallsColSize) {
    int arr[m][n];
    // initialize with 1 as unguarded
    for(int i = 0;i<m;i++) for(int j= 0;j<n;j++) arr[i][j] = 1;
    
    // position the guard with 2 as value
    for(int i = 0;i<guardsSize;i++){
        arr[guards[i][0]][guards[i][1]] = 2;
    }
    
    // position the wall with 3 as value
    for(int i = 0;i<wallsSize;i++){
        arr[walls[i][0]][walls[i][1]] = 3;
    }
    
    // Sweep rows left to right
    for (int i = 0; i < m; i++) {
        int seen = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 3) seen = 0;
            else if (arr[i][j] == 2) seen = 1;
            else if (seen && arr[i][j] == 1) arr[i][j] = 0;
        }
    }

    // Sweep rows right to left
    for (int i = 0; i < m; i++) {
        int seen = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (arr[i][j] == 3) seen = 0;
            else if (arr[i][j] == 2) seen = 1;
            else if (seen && arr[i][j] == 1) arr[i][j] = 0;
        }
    }

    // Sweep columns top to bottom
    for (int j = 0; j < n; j++) {
        int seen = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] == 3) seen = 0;
            else if (arr[i][j] == 2) seen = 1;
            else if (seen && arr[i][j] == 1) arr[i][j] = 0;
        }
    }

    // Sweep columns bottom to top
    for (int j = 0; j < n; j++) {
        int seen = 0;
        for (int i = m - 1; i >= 0; i--) {
            if (arr[i][j] == 3) seen = 0;
            else if (arr[i][j] == 2) seen = 1;
            else if (seen && arr[i][j] == 1) arr[i][j] = 0;
        }
    }

    // to find what can't be seen by the guard
    int c = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1) c++;
        }
    }
    return c;
}