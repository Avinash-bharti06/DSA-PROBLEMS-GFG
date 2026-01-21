class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int left = 0, right = 0;
        long long current_sum = 0;

        while (right < n) {
            current_sum += arr[right];

            // shrink from left if sum is too large
            while (current_sum > target && left <= right) {
                current_sum -= arr[left];
                left++;
            }

            // check if sum matches
            if (current_sum == target) {
                return {left + 1, right + 1};  // 1-based indexing
            }

            right++;
        }
        return {-1};
    }
};