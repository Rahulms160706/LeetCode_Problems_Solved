class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int i = 0, j = 0, m = grid.size(), n = grid[0].size();
        int count = 0;
        vector<int> r, c;
        for(i = 0;i<m;i++){
            int num = 0;
            for(j = 0;j<n;j++){
                if(grid[i][j] == 1) num++;
            }
            r.push_back(num);
        }
        for(i = 0;i<n;i++){
            int num = 0;
            for(j = 0;j<m;j++){
                if(grid[j][i] == 1) num++;
            }
            c.push_back(num);
        }
        for(int i = 0;i<m;i++){
            int num = r[i];
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1){
                    if(num > 1 || c[j] > 1) count++;
                }
            }
        }
        return count;
    }   
};