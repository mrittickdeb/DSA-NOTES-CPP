class Solution {
public:
  bool seeall(string  str1,int j){
            for(int i=0;i<=j;i++){
                if(str1[i]!='*') return false;
            }
            return true;
    }
    bool check(int i,int j,string & str1,string & str2, vector<vector<int>>& dp){
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return false;
        if(j<0 && i>=0) return seeall(str1,i);
        if(dp[i][j]!=-1) return dp[i][j];
        if(str1[i]==str2[j] || str1[i]=='?') return dp[i][j]=check(i-1,j-1,str1,str2,dp);
       if(str1[i]=='*'){
        return dp[i][j]=check(i-1,j,str1,str2,dp) || check(i,j-1,str1,str2,dp);
        }
        else return dp[i][j]=false;
    }
    bool isMatch(string str, string pat) {
            int n=pat.size(),m=str.size();
            vector<vector<int>> dp(n,vector<int>(m,-1));
            return check(n-1,m-1,pat,str,dp);
}
};