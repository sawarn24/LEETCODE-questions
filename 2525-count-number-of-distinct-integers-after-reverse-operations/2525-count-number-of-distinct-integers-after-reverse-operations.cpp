class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>abc;
        for(int i=0;i<nums.size();i++)
        {
            abc.insert(nums[i]);
            long long rev=0;;
            int n=nums[i];
            while(n!=0)
            {
                int d=n%10;
                rev=rev*10+d;
                n=n/10;
                
            }
            abc.insert(rev);
        }
        return abc.size();
        
    }
};