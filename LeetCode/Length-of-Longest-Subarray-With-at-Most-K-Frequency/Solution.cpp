1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        int n=nums.size();
5        int left=0,ans=0;
6        unordered_map<int,int> mpp;
7        for(int right=0;right<n;right++){
8            mpp[nums[right]]++;
9            while(mpp[nums[right]]>k){
10                mpp[nums[left]]--;
11                left++;
12            }
13            int curr=right-left+1;
14            ans=max(curr,ans);
15        }
16        return ans;
17    }
18};