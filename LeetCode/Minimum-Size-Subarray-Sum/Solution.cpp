1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n=nums.size();
5        int i=0;
6        int mini=INT_MAX;
7        int sum=0;
8        for(int j=0;j<n;j++){
9            sum+=nums[j];
10            while(sum>=target){
11                    sum-=nums[i];
12               mini=min(mini,j-i+1);
13                    i++;
14            }
15            
16             
17           
18        }
19        if(mini==INT_MAX) return 0;
20         return mini;
21    }
22};