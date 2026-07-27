class Solution {
public:
    int maxProduct(int n) {
        int temp=n;
        int maxi=INT_MIN;
        int pro=1;
        vector<int> ans;
        while(temp!=0){
            int d=temp%10;
            ans.push_back(d);
            temp/=10;
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1]*ans[ans.size()-2];
    }
};