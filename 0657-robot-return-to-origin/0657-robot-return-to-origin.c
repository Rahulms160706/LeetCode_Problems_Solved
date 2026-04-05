bool judgeCircle(char* moves) {
    int ud = 0, lr = 0;
    for(int i = 0;i<strlen(moves);i++){
        if(moves[i] == 'U') ud++;
        else if(moves[i] == 'D') ud--;
        else if(moves[i] == 'R') lr++;
        else if(moves[i] == 'L') lr--;
    }
    return (lr == 0 && ud == 0);
}