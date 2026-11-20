class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long,int> mp;
        long long sum = 0;
        int maxLen = 0;
        mp[0] = -1;
        for(int i = 0; i < arr.size();i++){
            sum+= arr[i];
            need = sum - k;
            if(mp.find(need)!=mp.end()){
                maxLen = max(maxLen , i - mp[need])
            }
            if(mp(sum)==mp.end()){
                mp[sum]++;
            }
        }
        return 0;
    }
};
