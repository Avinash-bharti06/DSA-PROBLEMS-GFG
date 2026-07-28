class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n==0 || n==1) return;
        int i = n-1;
        int lst = arr[n-1];
        while(i>0){
            arr[i]=arr[i-1];
            i--;
        }
        if(i==0) arr[0]=lst;
       
    }
};