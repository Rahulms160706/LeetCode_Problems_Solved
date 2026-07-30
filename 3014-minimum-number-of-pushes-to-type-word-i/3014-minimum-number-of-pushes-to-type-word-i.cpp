class Solution {
public:
    int minimumPushes(string word) {
        int l = word.length();
        if(l < 8) return l;
        int r = l / 8;
        int i = 1;
        int c = 0;
        while(i <= r){
            c += 8 * i;
            i++;
            l -= 8;
        }
        c += i * l;
        return c;
    }
};