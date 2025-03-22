class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
       unordered_map<int, int> freq;
        int cnt = 0;

        for (int num : nums) {
            int req = target - num;

            if (freq[req] > 0) {  
                cnt++;
                freq[req]--;
            } else {
                freq[num]++;
            }
        }

        return cnt;
    }
};