1class Solution {
2public:
3    vector<int> countOppositeParity(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> arr(n,0);
6        for(int i=0;i<n-1;i++){
7            for(int j=i+1;j<n;j++){
8                    if((nums[i]%2==0 && nums[j]%2==1) || (nums[i]%2==1 && nums[j]%2==0)) arr[i]++;
9            }
10        }
11        return arr;
12    }
13};