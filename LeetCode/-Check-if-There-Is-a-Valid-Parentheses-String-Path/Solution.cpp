1class Solution {
2public:
3    bool hasValidPath(vector<vector<char>>& grid) {
4        const int n = grid.size();
5        const int m = grid[0].size();
6        const int pathLen = n + m - 1;
7
8        if (pathLen % 2 == 1) {
9            return false;
10        }
11        if (grid[0][0] != '(' || grid[n - 1][m - 1] != ')') {
12            return false;
13        }
14
15        vector<vector<bitset<201>>> dp(n, vector<bitset<201>>(m));
16
17        dp[0][0].set(1);
18
19        for (int i = 0; i < n; ++i) {
20            for (int j = 0; j < m; ++j) {
21                const int change = grid[i][j] == '(' ? 1 : -1;
22
23                if (i > 0) {
24                    if (change == 1) {
25                        dp[i][j] |= dp[i - 1][j] << 1;
26                    } else {
27                        dp[i][j] |= dp[i - 1][j] >> 1;
28                    }
29                }
30
31                if (j > 0) {
32                    if (change == 1) {
33                        dp[i][j] |= dp[i][j - 1] << 1;
34                    } else {
35                        dp[i][j] |= dp[i][j - 1] >> 1;
36                    }
37                }
38            }
39        }
40
41        return dp[n - 1][m - 1].test(0);
42    }
43};