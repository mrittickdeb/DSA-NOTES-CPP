class Solution {
public:
 int check(int n,int m,string & s,string& str1, vector<vector<int>>& dp){
        if(n<0 || m<0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n]==str1[m]) return dp[n][m]=1+check(n-1,m-1,s,str1,dp);
        else return dp[n][m]=max(check(n-1,m,s,str1,dp),check(n,m-1,s,str1,dp));
    }
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        string str1=s;
        reverse(str1.begin(),str1.end());
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return check(n-1,n-1,s,str1,dp);
    }
    
  
};