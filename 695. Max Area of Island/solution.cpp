#include <vector>;
using namespace std;

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int height = grid.size();
        int width = grid[0].size();
        int max = 0;
        vector<vector<bool>> visited_mark(height, vector<bool>(width));
        
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++)
                if (grid[i][j] && !visited_mark[i][j]) {
                    int area = 0;
                    visit_island(height, width, visited_mark, grid, i, j, area);
                    if (area > max)
                        max = area;
                }
        
        return max;
    }
    
    void visit_island(int height, int width, vector<vector<bool>>& visited_mark, vector<vector<int>>& grid, int r, int c, int& max) {
        visited_mark[r][c] = true;
        max++;
        
        if (r > 0 && grid[r-1][c] && !visited_mark[r-1][c])
            visit_island(height, width, visited_mark, grid, r-1, c, max);
        if (c < width - 1 && grid[r][c+1] && !visited_mark[r][c+1])
            visit_island(height, width, visited_mark, grid, r, c+1, max);
        if (r < height - 1 && grid[r+1][c] && !visited_mark[r+1][c])
            visit_island(height, width, visited_mark, grid, r+1, c, max);
        if (c > 0 && grid[r][c-1] && !visited_mark[r][c-1])
            visit_island(height, width, visited_mark, grid, r, c-1, max);
        
        return;
    }
};
