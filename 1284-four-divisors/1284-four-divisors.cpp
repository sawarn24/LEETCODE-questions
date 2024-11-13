class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int cnt = 2, res = 1, result = 0; 

        for (int i = 0; i < size(nums); i++) { 
            cnt = 2; 
            res = 1 + nums[i]; 
            for (int j = 2; j * j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    cnt++;
                    res += j;
                    if (j != nums[i] / j) { 
                        cnt++;
                        res += nums[i] / j;
                    }
                }
                if (cnt > 4) break;
            }

            if (cnt == 4) result += res;
        }
        return result;

        
    }
};