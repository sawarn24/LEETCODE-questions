class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> count;
        int total_rabbits = 0;

        for (int i = 0; i < answers.size(); i++) {
            count[answers[i]]++;
        }

        for (unordered_map<int, int>::iterator it = count.begin(); it != count.end(); it++) {
            int key = it->first;
            int freq = it->second;
            int group_size = key + 1;

            total_rabbits += ((freq + group_size - 1) / group_size) * group_size;
        }

        return total_rabbits;
    }
        
};