class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char>st;
        string ans= "";
        for(int i = 0; i < n; i ++){
            if(!st.empty() && abs(st.top() - s[i]) == 32 ){ //97-65
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){ //stack to string
         ans+= st.top();
         st.pop(); //from stack
        }
        reverse(ans.begin(),ans.end()); //because its stored in reverse order in stack
        return ans;
    }
};