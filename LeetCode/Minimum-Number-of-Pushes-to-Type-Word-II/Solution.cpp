1class Solution {
2public:
3    int minimumPushes(string word) {
4        int n=word.size();
5        vector<int> mp(26,0);
6        for(char &ch:word){
7            mp[ch-'a']++;
8        }
9        sort(mp.begin(),mp.end(),greater<>());
10        int result=0;
11        for(int i=0;i<26;i++){
12            int freq=mp[i];
13            int press=i/8+1;
14            result+=freq*press;
15        }
16        return result;
17    }
18};