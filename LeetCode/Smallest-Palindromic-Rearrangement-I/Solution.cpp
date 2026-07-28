1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        vector<int> freq(26,0);
5        for(char ch:s){
6            freq[ch-'a']++;
7        }
8        string left="";
9        string middle="";
10        for(int i=0;i<26;i++){
11            if(freq[i]%2==1) middle=char(i+'a');
12        for(int j=0;j<freq[i]/2;j++) left+=char(i+'a');
13        }
14        string right=left;
15        reverse(right.begin(),right.end());
16        return left+middle+right;
17    }
18};