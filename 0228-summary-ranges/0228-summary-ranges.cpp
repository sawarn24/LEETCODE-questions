class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        
        if (nums.empty()) return ranges;
        
        int start = nums[0];
        int end = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == end + 1) {
                
                end = nums[i];
            } else {
                
                if (start == end) {
                    ranges.push_back(to_string(start));
                } else {
                    ranges.push_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];  
                end = nums[i];
            }
        }
        
        
        if (start == end) {
            ranges.push_back(to_string(start));
        } else {
            ranges.push_back(to_string(start) + "->" + to_string(end));
        }
        
        return ranges;
        
    }
};