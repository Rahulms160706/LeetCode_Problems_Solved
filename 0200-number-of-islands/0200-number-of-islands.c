// void checkright(int gridColSize, char **grid, int visit[][gridColSize], int i, int j)
// {
//     if(grid[i][j] == '0' || visit[i][j] == 1) return;
//     else
//     {
//         visit[i][j] = 1;
//         j++;
//         checkright(gridColSize,grid,visit,i,j);
//     }
// }

// void checkdown(int gridColSize, char **grid, int visit[][gridColSize], int i, int j)
// {
//     if(grid[i][j] == '0' || visit[i][j] == 1) return;
//     else
//     {
//         visit[i][j] = 1;
//         i++;
//         checkdown(gridColSize,grid,visit,i,j);
//     }
// }

void dfs(int gcs, char **grid, int visit[][gcs],int gs, int i, int j)
{
    if(i < 0 || i >= gs) return;
    if(j < 0 || j >= gcs) return;
    if(grid[i][j] == '0') return;
    if(visit[i][j] == 1) return;
    visit[i][j] = 1;
    dfs(gcs, grid, visit, gs, i+1, j);
    dfs(gcs, grid, visit, gs, i-1, j);
    dfs(gcs, grid, visit, gs, i, j+1);
    dfs(gcs, grid, visit, gs, i, j-1);
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int total = 0;
    int visit[gridSize][gridColSize[0]];
    for(int i = 0;i<gridSize;i++)
    {
        for(int j = 0;j<gridColSize[0];j++){
            visit[i][j] = 0;
        }
    }
    for(int i = 0;i<gridSize;i++)
    {
        for(int j = 0;j<gridColSize[0];j++){
            if(grid[i][j] == '1' && visit[i][j] == 0)
            {
                dfs(gridColSize[0], grid, visit, gridSize,i,j);
                total++;
            }
        }
    }
    return total;
}