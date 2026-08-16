//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j]==0) cnt++;
            }
        }
        return cnt;
    }
};