1class Solution {
2public:
3int func(int i,int j,vector<int>& cuts,vector<vector<int>>& dp){
4            if(i>j) return 0;
5            if(dp[i][j]!=-1) return dp[i][j];
6            int mini=INT_MAX;
7            for(int ind=i;ind<=j;ind++){
8                int ans=cuts[j+1]-cuts[i-1]+func(i,ind-1,cuts,dp)+func(ind+1,j,cuts,dp);
9                mini=min(mini,ans);
10            }
11            return dp[i][j]=mini;
12        }
13		int minCost(int n, vector<int>& cuts){
14           int m=cuts.size();
15            cuts.push_back(n);
16            cuts.insert(cuts.begin(),0);
17            sort(cuts.begin(),cuts.end());
18            vector<vector<int>> dp(m+1,vector<int>(m+1,-1));
19            return func(1,m,cuts,dp);
20		}
21    
22};