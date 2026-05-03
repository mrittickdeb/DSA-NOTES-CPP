class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                    if((nums[i]%2==0 && nums[j]%2==1) || (nums[i]%2==1 && nums[j]%2==0)) arr[i]++;
            }
        }
        return arr;
    }
};