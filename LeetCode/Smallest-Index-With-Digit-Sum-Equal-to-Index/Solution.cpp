1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        int n=nums.size();
5        for(int i=0;i<n;i++){
6            int d=nums[i];
7            int sum=0;
8            while(d>0){
9                int temp=d%10;
10                sum+=temp;
11                d/=10;
12            }
13            if(sum==i) return  i;
14        }
15        return -1;
16    }
17};