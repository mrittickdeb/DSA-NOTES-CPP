1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4      
5        int n=fruits.size();
6            unordered_map<int,int> mpp;
7            int maxi=0;
8            int i=0;
9            for(int j=0;j<n;j++){
10                int len=0;
11                mpp[fruits[j]]++;
12                while(mpp.size()>2) {
13                    mpp[fruits[i]]--;
14                    if(mpp[fruits[i]]==0) mpp.erase(fruits[i]);
15                    i++;
16                }
17                maxi=max(maxi,j-i+1);
18            }
19            return maxi;
20        
21        
22        
23        
24        
25        
26        
27        // int l=0,r=0,maxlen=0;
28        // unordered_map<int,int>mpp;
29        // while(r<fruits.size()){
30        //   mpp[fruits[r]]++;
31        //   if(mpp.size()>2){
32        //     while(mpp.size()>2){
33        //       mpp[fruits[l]]--;
34        //       if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
35        //       l++;
36        //     }
37        //   }
38        //   if(mpp.size()<=2) maxlen=max(maxlen,r-l+1);
39        // r++;
40        // }
41        // return maxlen;
42    }
43};