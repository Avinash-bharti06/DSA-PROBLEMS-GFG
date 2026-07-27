class Solution {
public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        long long total = 0;

        // Total sum of array
        for(int x : arr) total += x;

        long long leftSum = 0;

        for(int i = 0; i < n; i++) {
            long long rightSum = total - leftSum - arr[i];

            if(leftSum == rightSum)
                return i;  // equilibrium found

            leftSum += arr[i];
        }

        return -1;  // no equilibrium
    }
};