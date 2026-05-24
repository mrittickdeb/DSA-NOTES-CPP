1class Solution {
2public:
3    vector<int> limitOccurrences(vector<int>& nums, int k) {
4        int n=nums.size();
5        unordered_map<int,int>mpp;
6        for(int i=0;i<n;i++){
7            if(mpp[nums[i]]<k) mpp[nums[i]]++;
8        }
9        vector<int> vec;
10        for(int i=0;i<n;i++){
11            while(mpp[nums[i]]!=0){
12            vec.push_back(nums[i]);
13            mpp[nums[i]]--;
14            }
15        }
16        return vec;
17    }
18};