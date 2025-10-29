
int check(char** board,int x, int a, int b){
    // respective row and col
    for(int i = 0; i < 9;i++){
        if(i == a) continue;
        else if(board[i][b]-'0' == x) return 0;
    }
    for(int i = 0; i < 9;i++){
        if(i == b) continue;
        else if(board[a][i]-'0' == x) return 0;
    }

    // particular box
    int m = 0, n= 0, p=0, q=0;
    while(m <= a) {
        p = m;
        m += 3;
    }
    while(n <= b) {
        q = n;
        n += 3;
    }
    for(int i = p;i < p+3;i++){
        for(int j = q;j < q+3; j++){
            if((i == a && j == b)) continue;
            else if(board[i][j]-'0' == x) return 0;
        }
    }
    return 1;
}

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    *boardColSize = 9;
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            if(board[i][j] == '.') continue;
            int val = board[i][j] - '0';
            int flag = check(board, val, i, j);
            if(flag == 0) return false;
        }
    }
    return true;
}