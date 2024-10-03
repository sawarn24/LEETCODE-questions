class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        if(b%a==0)
        return a;
        for(int i=1;i<=a/2;i++)
        {
            if(b%i==0 && a%i==0)
            {
                max=i;
            }

        }
        return max;
        
    }
};