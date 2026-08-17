class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // store both count and maxi with some value
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]==1){
                count++; // it will get incremented
                maxi = max(maxi,count); // here we are using the max function which will compare bw maxi and count and will return whatever is bigger
            }
            else{
                count = 0;
            }
        }
        return maxi;

        
    }
};
