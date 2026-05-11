1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int n=nums.size();
5        int count=0;
6        int maxi=0;
7        for(int i=0;i<n;i++){
8            if(nums[i]==1) count++;
9            else {
10                maxi=max(maxi,count);
11                count=0;
12            }
13        }
14        maxi=max(maxi,count);
15        return maxi;
16
17
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
30        // int count=0;
31        // int m=0;
32        // for(int i=0;i<nums.size();i++){
33        //     if(nums[i]==1){
34        //         count++;
35        //     }
36        //     else{
37               
38        //            m=max(m,count);
39        //            count=0;
40            
41        // }
42        // }
43        // m=max(m,count);
44
45        // return m;
46    }
47};