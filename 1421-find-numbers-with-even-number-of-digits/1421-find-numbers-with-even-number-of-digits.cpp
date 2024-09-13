class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int x;
        int cnt=0;
        for(int i=0;i<size(nums);i++)
        {
           x=floor(log10(abs(nums[i]))) + 1;
           if(x%2==0)
           {
            cnt++;
           }
        }return cnt;

        
    }
};