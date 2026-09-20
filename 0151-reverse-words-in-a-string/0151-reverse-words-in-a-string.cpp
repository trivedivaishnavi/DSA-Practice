class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";

        // Extract all words
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                word += s[i];
            }
            else {
                if(!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            }
        }

        // Store last word
        if(!word.empty()) {
            words.push_back(word);
        }

        // Reverse order of words
        string ans = "";

        for(int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if(i != 0) {
                ans += " ";
            }
        }

        return ans;
    }
};