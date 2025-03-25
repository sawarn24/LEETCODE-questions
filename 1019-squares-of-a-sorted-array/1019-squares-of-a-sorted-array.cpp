class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
         vector<int> ans;
       while (i < nums.size() && nums[i] < 0) i++;
        int left = i - 1;  
        int right = i;
        while (left >= 0 && right < nums.size()) {
            if (nums[left] * nums[left] < nums[right] * nums[right]) {
                ans.push_back(nums[left] * nums[left]);
                left--;
            } else {
                ans.push_back(nums[right] * nums[right]);
                right++;
            }
        }
       while(left>=0)
       {
        ans.push_back(nums[left]*nums[left]);
        left--;
       }
        while(right<nums.size())
       {
        ans.push_back(nums[right]*nums[right]);
        right++;
       }
       return ans;
        
    }
};