class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int,int> a;
        unordered_map<int,int> b;
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(A[i]==B[i]) {
                a[A[i]]++;
                b[B[i]]++;
                cnt++;
           
            }
            else{
                if(a.find(B[i])!=a.end()) cnt++;
                else b[B[i]]++;
                if(b.find(A[i])!=b.end()) cnt++;
                else a[A[i]]++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};