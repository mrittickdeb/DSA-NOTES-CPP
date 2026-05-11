1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        int i=0;
6        unordered_map<int,int> mpp;
7       long long sum=0;
8        long long maxi=0;
9        for(int j=0;j<n;j++){
10            sum+=nums[j];
11            mpp[nums[j]]++;
12            if(j-i+1>k){
13                sum-=nums[i];
14                mpp[nums[i]]--;
15                if(mpp[nums[i]]==0) mpp.erase(nums[i]); 
16                i++;
17            }
18        if(j-i+1==k && mpp.size()==k) {
19            maxi=max(maxi,sum);
20        }
21        }
22    
23    return maxi;
24    
25    }
26
27
28
29
30
31
32
33
34    //     int n=nums.size();
35    //     int l=0;
36    //    unordered_map<long,long> mpp;
37    //    long long maxsum=0,sum=0;
38    //    for(int r=0;r<n;r++){
39    //     mpp[nums[r]]++;
40    //     sum+=nums[r];
41    //     if(r-l+1>k){
42    //         mpp[nums[l]]--;
43    //         if(mpp[nums[l]]==0) mpp.erase(nums[l]);
44    //         sum-=nums[l];
45    //         l++;
46    //     }
47    //     if(r-l+1==k && mpp.size()==k)
48    //     {
49    //         maxsum=max(maxsum,sum);
50    //     }
51    //    }
52    //    return maxsum;
53    // }
54};