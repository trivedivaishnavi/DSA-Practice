class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1; //divisor smallest will be 1
        int high = *max_element(nums.begin(),nums.end()); //largest num can be divisor
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int sum = 0;

            for(int num : nums){
                sum+= (num + mid - 1)/mid; } //ceil value

                if(sum<=threshold){
                    ans = mid;
                    high = mid - 1; //searching for more smaller
                }else{
                    low = mid + 1;
                }
            
           

        } 
        return ans;
    }   
    
};