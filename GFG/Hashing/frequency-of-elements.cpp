class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {

        int n = arr.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        vector<int> result(n, 0);

        for(int i = 1; i <= n; i++) {
            result[i-1] = mp[i];
        }

        return result;
    }
};
