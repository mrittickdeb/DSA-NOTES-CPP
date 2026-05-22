class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int minsum=0;
        int maxsum=0;
        int currmax=0,currmini=0;
        for(int i=0;i<n;i++){
            currmini=min(nums[i],nums[i]+currmini);
            minsum=min(minsum,currmini);
             currmax=max(nums[i],nums[i]+currmax);
            maxsum=max(maxsum,currmax);
        }
        minsum=abs(minsum);
        if(minsum>maxsum) return minsum;
        return maxsum;
    }
};