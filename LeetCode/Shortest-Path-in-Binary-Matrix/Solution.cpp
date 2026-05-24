1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4        int n=grid.size();
5        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
6        queue<pair<pair<int,int>,int>> q;
7        vector<vector<int>> vis(n,vector<int>(n,0));
8        q.push({{0,0},1});
9        vis[0][0]=1;
10        int delrow[]={-1,-1,-1,0,0,1,1,1};
11        int delcol[]={-1,0,1,-1,1,-1,0,1};
12        while(!q.empty()){
13            int row=q.front().first.first;
14            int col=q.front().first.second;
15            int dist=q.front().second;
16            q.pop();
17            if(row==n-1 && col==n-1) return dist;
18            for(int i=0;i<8;i++){
19                    int nrow=delrow[i]+row;
20                    int ncol=delcol[i]+col;
21                    if(nrow<n && nrow>=0 && ncol<n && ncol>=0 && vis[nrow][ncol]==0 && 
22                    grid[nrow][ncol]==0) {
23                        q.push({{nrow,ncol},dist+1});
24                        vis[nrow][ncol]=1;
25                    }
26            }
27        }   
28            return -1;
29    }
30}; 