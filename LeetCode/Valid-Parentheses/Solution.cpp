1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(char ch:s){
6            if(ch=='(' || ch=='{' || ch=='[') st.push(ch);
7            else {
8                if(st.empty()){
9                    return false;
10                }
11                char top=st.top();
12                st.pop();
13                if(ch==')' && top!='(') return false;
14                 if(ch==']' && top!='[') return false;
15                  if(ch=='}' && top!='{') return false;
16            }
17        }
18        return st.empty();
19    }
20};