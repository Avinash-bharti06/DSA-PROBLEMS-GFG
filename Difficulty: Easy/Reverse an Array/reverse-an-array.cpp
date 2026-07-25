class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n==0 || n==1) return ;
        int i = 0; int j = n-1;
        while(i <= j ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};