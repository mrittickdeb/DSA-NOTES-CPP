1class Solution {
2public:
3    int check(int i,int j,vector<int>& nums, vector<vector<int>>& dp){
4            if(i>j) return 0;
5            if(dp[i][j]!=-1) return dp[i][j];
6            int maxi=INT_MIN;
7            for(int ind=i;ind<=j;ind++){
8                int coins=nums[i-1]*nums[ind]*nums[j+1];
9                int remaining=check(i,ind-1,nums,dp)+check(ind+1,j,nums,dp);
10                maxi=max(maxi,coins+remaining);
11            }
12            return dp[i][j]=maxi;
13        }
14        int maxCoins(vector<int>& nums){
15    	 int n=nums.size();
16         nums.insert(nums.begin(),1);
17         nums.push_back(1);
18         vector<vector<int>> dp(n+2,vector<int>(n+2,-1));
19         return check(1,n,nums,dp);
20        }
21};