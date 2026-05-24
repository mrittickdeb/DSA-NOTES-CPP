1class Solution {
2public:
3    int minimumSwaps(vector<int>& nums) {
4        int n=nums.size();
5        int i=0,j=n-1;
6        int cnt=0;
7        while(i<j){
8            if(nums[i]==0 && nums[j]!=0){
9                swap(nums[i],nums[j]);
10                i++,j--;
11                cnt++;
12            }
13            else if(nums[i]==0 && nums[j]==0) j--;
14            else i++;
15        }
16        return cnt;
17    }
18};