class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       int n = s.length();
        int m = spaces.size();
        int spaceIndex = 0;

        // Vector to hold the result characters
        vector<char> result;

        // Traverse the original string
        for (int i = 0; i < n; ++i) {
            // Check if the current index matches any index in `spaces`
            if (spaceIndex < m && i == spaces[spaceIndex]) {
                result.push_back(' ');  // Insert a space
                spaceIndex++;  // Move to the next space index
            }
            result.push_back(s[i]);  // Add the current character
        }

        // Convert the result vector to a string and return
        return string(result.begin(), result.end());
       
        
    }
};