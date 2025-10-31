/* TLE :_(
bool ispr(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

bool isUgly(int n) {
    if(n<=0)return false;
   for(int i=2;i<=n;i++){
    if(i==5 || i==2 || i==3)continue;
    if(ispr(i)){
        if(n%i==0)return false;
    }
   }
   return true;
}
*/
bool isUgly(int n) {
    if(n<=0) return false;
    while(n%2 == 0)n/=2;
    while(n%3 == 0)n/=3;
    while(n%5 == 0)n/=5;
    return n==1;
}