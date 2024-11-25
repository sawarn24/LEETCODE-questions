class Solution {
public:
   
        bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        auto isPalindrome = [](string &s, int left, int right) {
            while (left < right) {
                if (s[left] != s[right]) {
                    return false;
                }
                left++;
                right--;
            }
            return true;
        };
        
        int cnt = 0;
        while (i <= j) {
            if (s[i] != s[j]) {
                cnt++;
                if (cnt > 1) {
                    return false;
                }
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++;
            j--;
        }
        
        return true;
    }
        
    
};