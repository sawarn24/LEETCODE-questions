class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result;

        // Traverse both strings from right to left
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            // Add the current digit of 'a' if available
            if (i >= 0) {
                sum += a[i] - '0';  // Convert '0' or '1' to integer
                i--;
            }

            // Add the current digit of 'b' if available
            if (j >= 0) {
                sum += b[j] - '0';  // Convert '0' or '1' to integer
                j--;
            }

            // Determine the current digit and the new carry
            carry = sum / 2;
            result += (sum % 2) + '0';  // Append the current digit ('0' or '1')
        }

        // The result string is reversed, so we need to reverse it before returning
        reverse(result.begin(), result.end());
        return result;
        
    }
};