class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int mini=INT_MAX;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                    sum-=nums[i];
               mini=min(mini,j-i+1);
                    i++;
            }
            
             
           
        }
        if(mini==INT_MAX) return 0;
         return mini;
    }
};