class Solution {
public:

    void DFSMarking(int i, int j, vector<vector<char>>& grid)
    {
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != '1')
        {
            return;
        }
        
        grid[i][j] = '0';
        DFSMarking(i+1, j, grid);
        DFSMarking(i-1, j, grid);
        DFSMarking(i, j+1, grid);
        DFSMarking(i, j-1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0)
        {
            return 0;
        }

        m = grid.size();
        n = grid[0].size();
        int res = 0;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                {
                    res++;
                    DFSMarking(i, j, grid);
                }
            }
        }

        return res;
    }

private: 
    int n;
    int m;
};