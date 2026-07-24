class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        // code here
        int n = arr.size();
        if(i<0 || i>n-1) return 0;
        return arr[i];
    }
};
