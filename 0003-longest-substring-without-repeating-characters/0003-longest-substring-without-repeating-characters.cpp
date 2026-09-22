class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int n = s.size();
        int maxLen = 0;
        int left = 0;

        for(int right = 0; right < n; right++){
            while(charSet.count(s[right])){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};