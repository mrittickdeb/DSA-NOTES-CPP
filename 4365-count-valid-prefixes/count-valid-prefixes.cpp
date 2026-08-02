class Solution {
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        int zero=0,one=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zero++;
            else one++;
            if(abs(one-zero)<=1) ans++;
        }
        return ans;
    }
};