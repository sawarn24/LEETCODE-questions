class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    unordered_set<int> set3(nums3.begin(), nums3.end());
    unordered_set<int> result;

    for (int num : set1) {
        if (set2.count(num) || set3.count(num)) {
            result.insert(num);
        }
    }
    for (int num : set2) {
        if (set3.count(num)) {
            result.insert(num);
        }
    }

    return vector<int>(result.begin(), result.end());
        
    }
};