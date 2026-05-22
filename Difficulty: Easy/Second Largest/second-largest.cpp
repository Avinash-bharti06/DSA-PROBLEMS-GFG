class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx = -1;
        for(int i : arr) mx=max(mx,i);
        int smax=-1;
        for(int i: arr){
            if(i!=mx) smax = max(i,smax);
        }
        return smax;
    }
};