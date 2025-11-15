bool isPerfectSquare(int num) {
    long long int i = 1;
    while(i){
        if(i * i == num) return true;
        else if(i * i > num) break;
        i++;
    }
    return false;
}