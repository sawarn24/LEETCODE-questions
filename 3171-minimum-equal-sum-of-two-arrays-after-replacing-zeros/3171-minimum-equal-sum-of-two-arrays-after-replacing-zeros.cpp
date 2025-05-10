class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int zero1 = 0, zero2 = 0;
        int size1=nums1.size();
        int size2=nums2.size();

       
        for (int i = 0; i < size1; ++i) {
            if (nums1[i] == 0) {
                zero1++;
            } else {
                sum1 += nums1[i];
            }
        }

        for (int i = 0; i < size2; ++i) {
            if (nums2[i] == 0) {
                zero2++;
            } else {
                sum2 += nums2[i];
            }
        }

        long long minSum1 = sum1 + zero1; 
        long long minSum2 = sum2 + zero2;

        if ((zero1 == 0 && minSum1 < minSum2) || (zero2 == 0 && minSum2 < minSum1)) {
            return -1;
        }

       
        return (minSum1 > minSum2) ? minSum1 : minSum2; 
    }
};