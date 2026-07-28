class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        string left="";
        string middle="";
        for(int i=0;i<26;i++){
            if(freq[i]%2==1) middle=char(i+'a');
        for(int j=0;j<freq[i]/2;j++) left+=char(i+'a');
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};