class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       unordered_set<int> s(nums.begin(),nums.end());
            vector<int> missing;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());

        for(int i=mn;i<=mx;i++){
            if(s.find(i)==s.end()){
                missing.push_back(i);
            }
            
        }
        return missing;
    }
};