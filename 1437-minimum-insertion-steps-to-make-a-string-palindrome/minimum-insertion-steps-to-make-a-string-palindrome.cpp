class Solution {
public:
int check(int n,string& str1,int m,string & str2, vector<vector<int>>& dp){
    if(n<0 || m<0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(str1[n]==str2[m]) return dp[n][m]=1+check(n-1,str1,m-1,str2,dp);
    else return dp[n][m]=max(check(n-1,str1,m,str2,dp),check(n,str1,m-1,str2,dp));
}
int minInsertions(string s) {
  int n=s.length();
  string str1=s;
  reverse(str1.begin(),str1.end());
  vector<vector<int>> dp(n,vector<int>(n,-1)); 
  int m=check(n-1,s,n-1,str1,dp);
  return n-m;
  }

};