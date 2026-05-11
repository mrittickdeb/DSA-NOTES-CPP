1class Solution {
2public:
3            bool isPalindrome(int i,int j,string& s,vector<int>& dp){
4            while(i<j){
5                if(s[i]!=s[j]) return false;
6                i++;
7                j--;
8            }
9            return true;
10        }
11        int minpartition(int i,int n,string& s,  vector<int>& dp){
12            if(i==n) return 0;
13            if(dp[i]!=-1) return dp[i];
14            int mincost=INT_MAX;
15            for(int j=i;j<n;j++){
16                if(isPalindrome(i,j,s,dp)){
17                    int cost=1+minpartition(j+1,n,s,dp);
18                    mincost=min(mincost,cost);
19                }
20            }
21            return dp[i]=mincost;
22        }
23    	int minCut(string s){
24            int n=s.length();
25            vector<int> dp(n,-1);
26            return minpartition(0,n,s,dp)-1;
27	    }
28};