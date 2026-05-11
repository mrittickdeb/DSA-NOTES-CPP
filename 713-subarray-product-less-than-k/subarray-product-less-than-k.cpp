class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        int n=nums.size();
        int count=0,pro=1;
        int i=0;
       
        for(int j=0;j<n;j++){
            pro*=nums[j];
            while(i<=j && pro>=k) pro=pro/nums[i++];
           count+=j-i+1;
        }
        return count;
    }
};