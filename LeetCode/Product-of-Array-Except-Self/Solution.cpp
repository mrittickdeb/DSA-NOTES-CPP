1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4              int n=nums.size();  
5                vector<int> pre(n);
6                int p=nums[0];
7                pre[0]=1;
8                for(int i=1;i<n;i++){
9                    pre[i]=p;
10                    p*=nums[i];    
11                }
12                p=nums[n-1];
13                  for(int i=n-2;i>=0;i--){
14                    pre[i]*=p;
15                    p*=nums[i];    
16                }
17            return pre;
18        
19        
20        
21        
22        
23        
24        
25        
26        
27        
28        
29        
30        
31        
32        // int n=nums.size();
33        // vector<int> pre(n);
34        // int p=nums[0];
35        // pre[0]=1;
36        // for(int i=1;i<n;i++){
37        //     pre[i]=p;
38        //     p*=nums[i];
39        // }
40        // p=nums[n-1];
41        // for(int i=n-2;i>=0;i--){
42        //     pre[i]*=p;
43        //     p=p*nums[i];
44        // }
45        // return pre;
46    }
47};