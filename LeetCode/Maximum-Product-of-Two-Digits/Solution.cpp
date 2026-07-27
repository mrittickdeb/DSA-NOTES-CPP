1class Solution {
2public:
3    int maxProduct(int n) {
4        int temp=n;
5        int maxi=INT_MIN;
6        int pro=1;
7        vector<int> ans;
8        while(temp!=0){
9            int d=temp%10;
10            ans.push_back(d);
11            temp/=10;
12        }
13        sort(ans.begin(),ans.end());
14        return ans[ans.size()-1]*ans[ans.size()-2];
15    }
16};