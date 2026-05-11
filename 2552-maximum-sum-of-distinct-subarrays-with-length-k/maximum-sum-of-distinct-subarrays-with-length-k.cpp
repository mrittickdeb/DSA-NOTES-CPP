class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        unordered_map<int,int> mpp;
       long long sum=0;
        long long maxi=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            mpp[nums[j]]++;
            if(j-i+1>k){
                sum-=nums[i];
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0) mpp.erase(nums[i]); 
                i++;
            }
        if(j-i+1==k && mpp.size()==k) {
            maxi=max(maxi,sum);
        }
        }
    
    return maxi;
    
    }








    //     int n=nums.size();
    //     int l=0;
    //    unordered_map<long,long> mpp;
    //    long long maxsum=0,sum=0;
    //    for(int r=0;r<n;r++){
    //     mpp[nums[r]]++;
    //     sum+=nums[r];
    //     if(r-l+1>k){
    //         mpp[nums[l]]--;
    //         if(mpp[nums[l]]==0) mpp.erase(nums[l]);
    //         sum-=nums[l];
    //         l++;
    //     }
    //     if(r-l+1==k && mpp.size()==k)
    //     {
    //         maxsum=max(maxsum,sum);
    //     }
    //    }
    //    return maxsum;
    // }
};