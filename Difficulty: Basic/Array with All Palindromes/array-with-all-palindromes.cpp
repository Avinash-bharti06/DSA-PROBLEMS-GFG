class Solution {
  public:
    bool palimdrome(int x){
      string s  = to_string(x);
      int i = 0;
      int j = s.size()-1;
      while(i<j){
          if(s[i]!=s[j]) return false;
          i++;
          j--;
      }
      return true;
      
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
      int n = arr.size();
      for(int i =0;i<n;i++){
          if(!palimdrome(arr[i])) return false;
      }
      return true;
        
    }
};