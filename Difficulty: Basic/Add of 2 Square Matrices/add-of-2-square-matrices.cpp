class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        // Code here
        int n = a.size();
        int n1 = a[0].size();
        int m = b.size();
        if(n!=m) return ;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n1;j++) 
            a[i][j]= a[i][j]+b[i][j];
        }
    }
};