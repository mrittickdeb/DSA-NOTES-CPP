1class Solution {
2public:
3  
4    int check(string& str1, string&str2,int i,int j, vector<vector<int>>& dp){
5        if(i<0) return j+1;
6        if(j<0) return i+1;
7        if(dp[i][j]!=-1) return dp[i][j];
8        if(str1[i]==str2[j]) return dp[i][j]=check(str1,str2,i-1,j-1,dp);
9            int insertone=check(str1,str2,i,j-1,dp);
10            int deleteone=check(str1,str2,i-1,j,dp);
11            int replaceone=check(str1,str2,i-1,j-1,dp);
12            return dp[i][j]=1+min({insertone,deleteone,replaceone});
13    }
14    int minDistance(string start, string target) {
15         int n=start.size(),m=target.size();
16            vector<vector<int>> dp(n,vector<int>(m,-1));
17            return check(start,target,n-1,m-1,dp);    
18    }
19};