class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> freq(26, 0);

        int l = 0;
        int maxLen = 0;
        int maxFreq = 0;

        for(int r = 0; r < s.size(); r++) {

            // Add current character
            freq[s[r] - 'A']++;

            // Track most frequent character
            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            // Too many replacements → shrink
            while((r - l + 1) - maxFreq > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            // Save longest valid window
            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};