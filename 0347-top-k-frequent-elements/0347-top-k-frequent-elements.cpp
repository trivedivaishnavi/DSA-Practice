class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        //count frequency
        for(int num : nums){
            freq[num]++;
        }
        //create max heap
        priority_queue<pair<int,int>>pq;
        //push freq, element
        for(auto it: freq){
            pq.push({it.second,it.first});
        }
        //extract top k
        vector<int>ans;

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};