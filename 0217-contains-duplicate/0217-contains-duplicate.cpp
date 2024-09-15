class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>hashset;
        

        for(int i=0;i<size(nums);i++)
        {  
           auto result=hashset.insert(nums[i]);
            if(!result.second)
            {
                return true;
            }
        }
        return false;
        
    }
};