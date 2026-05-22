1class Solution {
2public:
3 vector<vector<int>>  updateMatrix(vector<vector<int>> grid){
4                int n=grid.size();
5                int m=grid[0].size();
6                vector<vector<int>> vis(n,vector<int>(m,0));
7        vector<vector<int>> dist(n,vector<int>(m,0));
8            queue<pair<pair<int,int>,int>> q;
9                for(int i=0;i<n;i++){
10                    for(int j=0;j<m;j++){
11                        if(grid[i][j]==0){
12                            q.push({{i,j},0});
13                            vis[i][j]=1;
14                        }
15                        else{
16                            vis[i][j]=0;
17                        }
18                    }
19                }
20                    int delrow[]={-1,0,+1,0};
21                    int delcol[]={0,1,0,-1};
22                while(!q.empty()){
23                    int row=q.front().first.first;
24                    int col=q.front().first.second;
25                    int val=q.front().second;
26                    q.pop();
27                    dist[row][col]=val;
28                    for(int i=0;i<4;i++){
29                        int nrow=row+delrow[i];
30                        int ncol=col+delcol[i];
31                        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0) {
32                            vis[nrow][ncol]=1;
33                            q.push({{nrow,ncol},val+1});
34                        } 
35                    }
36                }
37                return dist;
38        
39        
40        
41        
42        
43        
44        
45        
46        
47        
48        
49        
50        
51        
52        //     int n=grid.size();
53        //     int m=grid[0].size();
54        //     vector<vector<int>> vis(n,vector<int> (m,0));
55        //      vector<vector<int>> dist(n,vector<int> (m,0));
56        //      queue<pair<pair<int,int>,int>> q;
57        //      for(int i=0;i<n;i++){
58        //         for(int j=0;j<m;j++){
59        //             if(grid[i][j]==0){
60        //                     q.push({{i,j},0});
61        //                     vis[i][j]=1;
62        //             }
63        //             else{
64        //                       vis[i][j]=0;  
65        //             }
66        //         }
67        //      }
68        //      int delRow[]={-1,0,1,0};
69        //      int delCol[]={0,1,0,-1};
70        //   while(!q.empty()){
71        //     int row=q.front().first.first;
72        //     int col=q.front().first.second;
73        //     int steps=q.front().second;
74        //     q.pop();
75        //     dist[row][col]=steps;
76        //     for(int i=0;i<4;i++){
77        //         int nRow=row+delRow[i];
78        //         int nCol=col+delCol[i];
79        //         if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && vis[nRow][nCol]==0){
80        //             vis[nRow][nCol]=1;
81        //         q.push({{nRow,nCol},steps+1});
82        //         }
83        //     }
84        //   }   
85        //   return dist;
86    }
87};