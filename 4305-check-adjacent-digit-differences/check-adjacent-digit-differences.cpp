class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.length();
        for(int i=0;i<n-1;i++){
            char a=s[i]-'0';
            char b=s[i+1]-'0';
            if(abs(a-b)>2) return false;
        }
        return true;
    }
};