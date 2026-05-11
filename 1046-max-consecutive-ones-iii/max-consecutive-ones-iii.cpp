class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n=nums.size();
        int left=0;
        int maxi=0;
        int zerocount=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0) zerocount++;
            while(zerocount>k){
                    if(nums[left]==0) zerocount--;
                    left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
        
        
        
        
        
        
        
        
        
        
        //  int n=nums.size();
        // int left=0,zerocount=0,maxlen=0;
        // for(int right=0;right<n;right++){
        //   if(nums[right]==0) zerocount++;
        
        // while(zerocount>k){
        //   if(nums[left]==0) zerocount--;
        //   left++;
        // }
        // int len=right-left+1;
        // maxlen=max(maxlen,len);
        // }
        // return maxlen;
    }
};