1class Solution {
2public:
3// void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int newColor,int delRow[],int delCol[],int iniColor){
4//         ans[row][col]=newColor;
5//         int n=image.size();
6//         int m=image[0].size();
7//         for(int i=0;i<4;i++){
8//             int nrow=row+delRow[i];
9//             int ncol=col+delCol[i];
10//             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=newColor){
11//                 dfs(nrow,ncol,ans,image,newColor,delRow,delCol,iniColor);
12//             }
13//         }
14//     }
15
16
17    void dfs(int row,int col, vector<vector<int>>& ans,vector<vector<int>> &image,int newcolor,int delrow[], int delcol[],int inicolor){
18        ans[row][col]=newcolor;
19        int n=ans.size();
20         int m = image[0].size();
21        for(int i=0;i<4;i++){
22            int nrow=delrow[i]+row;
23            int ncol=delcol[i]+col;
24            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor
25            && ans[nrow][ncol]!=newcolor) dfs(nrow,ncol,ans,image,newcolor,delrow,delcol,inicolor); 
26        }
27     }
28
29
30    vector<vector<int>> floodFill(vector<vector<int>> &image,int sr, int sc, int newColor) {
31
32        int n=image.size();
33        int inicolor=image[sr][sc];
34        vector<vector<int>> ans=image;
35        int delrow[]={-1,0,1,0};
36        int delcol[]={0,1,0,-1};
37        dfs(sr,sc,ans,image,newColor,delrow,delcol,inicolor);
38        return ans;
39
40
41
42
43    //   int iniColor=image[sr][sc];
44    //   vector<vector<int>> ans=image;
45    //   int delRow[]={-1,0,+1,0};
46    //   int delCol[]={0,+1,0,-1};
47    //   dfs(sr,sc,ans,image,newColor,delRow,delCol,iniColor);
48    //   return ans;
49    }
50};