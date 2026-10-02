class Solution {
public:
    string multiply(string num1, string num2) {
        int l1 = num1.length(), l2 = num2.length();
        vector<vector<int>> a(l2,vector<int>(l1, 0));
        for(int i = 0;i<l2;i++){
            int x = (num2[i] - '0');
            for(int j = 0;j<l1;j++){
                a[i][j] = x * (num1[j] - '0');
            }
        }
        int k = l1+l2;
        vector<int> p(k, 0);
        for(int i = l2-1;i>=0;i--){
            int m = --k;
            for(int j = l1-1;j>=0;j--){
                p[m] += a[i][j];
                m--;
            }
        }
        int c = 0;
        k = (l1+l2);
        for(int i = k-1;i>=0;i--){
            int t = p[i] + c;
            p[i] = t % 10;
            c = t / 10;
        }
        string s;
        int i = 0;
        while(i < k && p[i] == 0){
            i++;
        }
        if(i == k) return "0";
        for(int j = i;j < k;j++){
            s += p[j] + '0';
        }
        return s;
    }
};