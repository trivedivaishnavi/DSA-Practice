class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        
        // Smallest possible capacity
        int low = *max_element(weights.begin(), weights.end());

        // Largest possible capacity
        int high = 0;
        for (int weight : weights) {
            high += weight;
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int days = 1;
            int load = 0;

            // Check how many days this capacity needs
            for (int weight : weights) {
                if (load + weight <= mid) {
                    load += weight;
                }
                else {
                    days++;
                    load = weight;
                }
            }

            // Capacity works, try smaller
            if (days <= D) {
                ans = mid;
                high = mid - 1;
            }
            // Capacity is too small, try bigger
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};