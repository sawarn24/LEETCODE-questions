class Solution {
public:
    string countAndSay(int n) {
         if (n == 1) return "1";
    
    string current = "1";
    
    for (int i = 2; i <= n; ++i) {
        string nextSequence = "";
        int count = 1;

        for (int j = 1; j < current.size(); ++j) {
            if (current[j] == current[j - 1]) {
                count++;
            } else {
                nextSequence += to_string(count) + current[j - 1];
                count = 1;
            }
        }

        nextSequence += to_string(count) + current.back();
        current = nextSequence;
    }

    return current;
        
    }
};