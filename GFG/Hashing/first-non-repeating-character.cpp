class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<int, int> mp;
        int n = s.size();
        //first pass
        for(int i = 0; i < n; i ++){
            mp[s[i]]++;
        }
        //second pass
        for(int i = 0; i <n ; i++){
            if(mp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};
