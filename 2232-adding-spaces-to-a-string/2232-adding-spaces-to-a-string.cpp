class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       int n = s.length();
        int m = spaces.size();
        int spaceIndex = 0;

        
        vector<char> result;

       
        for (int i = 0; i < n; ++i) {
            
            if (spaceIndex < m && i == spaces[spaceIndex]) {
                result.push_back(' ');  
                spaceIndex++;  
            }
            result.push_back(s[i]);  
        }

       
        return string(result.begin(), result.end());
       
        
    }
};