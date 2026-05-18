class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        
        set<int> st;

        for (int x : a)
            st.insert(x);

        for (int x : b)
            st.insert(x);

        vector<int> ans;

        for (int x : st)
            ans.push_back(x);

        return ans;
    }
};