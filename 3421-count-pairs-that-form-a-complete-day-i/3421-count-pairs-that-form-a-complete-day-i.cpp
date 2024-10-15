class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> remainder_count;
    int complete_day_pairs = 0;

    for (int time : hours) {
        int remainder = time % 24;
        int complement = (24 - remainder) % 24; 

                if (remainder_count.find(complement) != remainder_count.end()) {
            complete_day_pairs += remainder_count[complement];
        }

       
        remainder_count[remainder]++;
    }

    return complete_day_pairs;
    }
};