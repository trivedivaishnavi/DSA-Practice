class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        int start = 0;
        int maxLen = 0;

        for(int i = 0; i < n; i++) {

            // Odd palindrome: "aba"
            int l = i;
            int r = i;

            while(l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;

                // Save longest
                if(len > maxLen) {
                    start = l;
                    maxLen = len;
                }

                l--;
                r++;
            }

            // Even palindrome: "abba"
            l = i;
            r = i + 1;

            while(l >= 0 && r < n && s[l] == s[r]) {
                int len = r - l + 1;

                // Save longest
                if(len > maxLen) {
                    start = l;
                    maxLen = len;
                }

                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};