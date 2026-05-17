class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        
        if(a.size() < b.size()) return false;

        unordered_map<int,int> mp;

        // count frequency of elements in a
        for(int x : a){
            mp[x]++;
        }

        // check elements of b
        for(int x : b){
            if(mp[x] == 0){
                return false;
            }
            mp[x]--;
        }

        return true;
    }
};