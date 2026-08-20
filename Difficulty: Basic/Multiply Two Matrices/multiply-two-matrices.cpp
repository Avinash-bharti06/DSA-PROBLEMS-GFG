class Solution {
public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a,
                                          vector<vector<int>> &b) {

        int n = a.size();
        int m = a[0].size();
        int p = b[0].size();

        vector<vector<int>> ans(n, vector<int>(p, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < p; j++) {
                for(int k = 0; k < m; k++) {
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        return ans;
    }
};