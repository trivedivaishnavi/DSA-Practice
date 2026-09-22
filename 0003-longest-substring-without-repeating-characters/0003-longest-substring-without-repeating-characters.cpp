class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet; //hash set for storing unique chars
        int n = s.size();
        int maxLen = 0;
        int left = 0;

        for(int right = 0; right < n; right++){ 
            while(charSet.count(s[right])){ //if duplicate, shrink window
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]); //add current char to set

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};