int furthestDistanceFromOrigin(char* moves) {
    int x = 0, b = 0, total = 0;
    for(int i = 0;moves[i] != '\0';i++){
        if(moves[i] == '_') b++;
        else if(moves[i] == 'R') x++;
        else if(moves[i] == 'L') x--;
    }
    if(x < 0) total = -1 * (x - b);
    else total = x + b;
    return total;
}