class NumArray {
    vector<int> nums;      
    vector<int> prefixSum; 
    
public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
        int n = nums.size();
        prefixSum.resize(n + 1, 0); 
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    
    void update(int index, int val) {
        
        int diff = val - nums[index];
        nums[index] = val;
        
        for (int i = index + 1; i < prefixSum.size(); ++i) {
            prefixSum[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        
        return prefixSum[right + 1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
