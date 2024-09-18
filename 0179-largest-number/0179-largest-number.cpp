bool compare(string &a, string &b) {
    return a + b > b + a;}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector<string>numstrs;
       for (int num : nums) {
        numstrs.push_back(to_string(num));
    }
    sort(numstrs.begin(), numstrs.end(), compare);
    if (numstrs[0] == "0") {
        return "0";
    }

   
    string result;
    for (string num : numstrs) {
        result += num;
    }

    return result;
}
    };
