class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++){//n/2*n/2
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){//n*n/2
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};