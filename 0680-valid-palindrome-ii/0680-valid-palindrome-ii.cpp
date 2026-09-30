class Solution {
public:
    // Check if s[l...r] is palindrome
    bool check(string& s, int l, int r) {
        while(l < r) {
            if(s[l] != s[r])
                return false;

            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r) {

            // Match → move inward
            if(s[l] == s[r]) {
                l++;
                r--;
            }

            // Mismatch → skip left OR right
            else {
                return check(s, l + 1, r) ||
                       check(s, l, r - 1);
            }
        }

        return true;
    }
};