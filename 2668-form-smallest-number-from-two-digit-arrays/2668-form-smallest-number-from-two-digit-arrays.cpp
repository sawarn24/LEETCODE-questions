class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
    set<int> set2(nums2.begin(), nums2.end());

    vector<int> common;
    for (int num : set1) {
        if (set2.count(num)) {
            common.push_back(num);
        }
    }

    if (!common.empty()) {
        return *min_element(common.begin(), common.end());
    }

    int min1 = *min_element(nums1.begin(), nums1.end());
    int min2 = *min_element(nums2.begin(), nums2.end());

    return min1 < min2 ? min1 * 10 + min2 : min2 * 10 + min1;
        
    }
};