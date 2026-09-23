class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        vector<int> freqP(26, 0);
        vector<int> freqWindow(26, 0);

        // p ki frequency
        for(int i = 0; i < p.size(); i++) {
            freqP[p[i] - 'a']++;
        }

        int l = 0;

        for(int r = 0; r < s.size(); r++) {

            // current character add
            freqWindow[s[r] - 'a']++;

            if(r - l + 1 == p.size()) {

                // anagram mila
                if(freqP == freqWindow) {
                    ans.push_back(r - p.size() + 1);
                }

                // left character remove
                freqWindow[s[l] - 'a']--;
                l++;
            }
        }

        return ans;
    }
};