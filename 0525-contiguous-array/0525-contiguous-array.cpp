class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int balance = 0;
        int maxLen = 0;
        mp[0]= -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==1){
                balance++;
            }
            if(nums[i]==0){
                balance --;
            }
            if(mp.find(balance)!=mp.end()){
                maxLen = max(maxLen, i -mp[balance]);
            }
            else{
                 mp[balance]=i;
            }
           
        }
        return maxLen;

        
    }
};