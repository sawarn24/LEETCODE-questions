class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0, depth = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                depth++;
            } else {
                depth--;
                if (s[i - 1] == '(') {
                    score += 1 << depth; // Add 2^(depth - 1) for each "()"
                }
            }
        }

        return score;
        
    }
};