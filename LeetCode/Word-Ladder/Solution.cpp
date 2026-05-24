1class Solution {
2public:
3    int ladderLength(string startWord, string targetWord, vector<string>& wordList){
4               int n=wordList.size();         
5                queue<pair<string,int>> q;
6                q.push({startWord,1});
7                unordered_set<string> st(wordList.begin(),wordList.end());
8                st.erase(startWord);
9                    while(!q.empty()){
10                        string word=q.front().first;
11                        int steps=q.front().second;
12                        q.pop();
13                        if(word==targetWord) return steps;
14                        for(int i=0;i<word.size();i++){
15                            char original=word[i];
16                            for(char ch='a';ch<='z';ch++){
17                                word[i]=ch;
18                                if(st.find(word)!=st.end()){
19                                    st.erase(word);
20                                    q.push({word,steps+1});
21                                }
22                            }
23                            word[i]=original;
24                        }
25                    }
26                return 0;
27            
28            
29            
30            
31            
32            
33            
34            
35            
36            
37            
38                //   queue<pair<string,int>> q;
39                //                 q.push({startWord,1});
40                //                 unordered_set<string> st(wordList.begin(),wordList.end());
41                //                 st.erase(startWord);
42                //                 while(!q.empty()){
43                //                     string word=q.front().first;
44                //                     int steps=q.front().second;
45                //                     q.pop();
46                //                     if(word==targetWord) return steps;
47                //                     for(int i=0;i<word.size();i++){
48                //                         char original=word[i];
49                //                         for(char ch='a';ch<='z';ch++){
50                //                             word[i]=ch;
51                //                             if(st.find(word)!=st.end()){
52                //                                 st.erase(word);
53                //                                 q.push({word,steps+1});
54                //                             }
55                //                         }
56                //                         word[i]=original;
57                //                     }
58                //                 }
59                //                 return 0;
60    }
61};