class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hash;
        int left = 0, maxLength = 0;
        
        for (int right = 0; right < s.size(); right++) {
            
            while (hash.find(s[right]) != hash.end()) {
                hash.erase(s[left]);  
                left++;  
            }

            hash.insert(s[right]); 
            maxLength = max(maxLength, right - left + 1);  
        }
        
        return maxLength;
    }
};