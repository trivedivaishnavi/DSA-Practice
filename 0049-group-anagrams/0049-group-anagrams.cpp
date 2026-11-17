class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string str : strs) { //visit every word

            string original = str; //maintain original order

            sort(str.begin(), str.end()); //sort 

            mp[str].push_back(original); //original string to that group
        }

        vector<vector<string>> ans;

        for(auto it : mp) { //traversing the map
            ans.push_back(it.second); //it.first is sorted key second is original strings
        }

        return ans;
    }
};