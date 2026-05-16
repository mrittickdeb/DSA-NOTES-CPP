1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int> mpp;
6        mpp[0]=-1;
7        int prefixsum=0;
8        for(int i=0;i<n;i++){
9            prefixsum+=nums[i];
10            int rem=prefixsum%k;
11            if(mpp.find(rem)!=mpp.end()){
12                if(i-mpp[rem]>=2) return true;
13            }
14            else mpp[rem]=i;
15        }
16        return false;
17    }
18};