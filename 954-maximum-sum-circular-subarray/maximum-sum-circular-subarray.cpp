class Solution {
public:
    int kadencemax(vector<int>& nums){
            int n=nums.size();
            int maxi=nums[0];
            int sum=nums[0];
            for(int i=1;i<n;i++){
                sum=max(sum+nums[i],nums[i]);
                maxi=max(maxi,sum);
            }
            return maxi;
    }
     int kadencemini(vector<int>& nums){
 int n=nums.size();
            int maxi=nums[0];
            int sum=nums[0];
            for(int i=1;i<n;i++){
                sum=min(sum+nums[i],nums[i]);
                maxi=min(maxi,sum);
            }
            return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int maxi=kadencemax(nums);
        int mini=kadencemini(nums);
        int ans=sum-mini;
  if(maxi>0)  return max(ans,maxi);
    return maxi;
    }
};