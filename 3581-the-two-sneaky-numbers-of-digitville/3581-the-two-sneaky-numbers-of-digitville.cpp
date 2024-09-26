class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>hash;
        for(int i=0;i<size(nums);i++)
        {
            auto res=hash.insert(nums[i]);
            if(!res.second)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
        


        
    }
};