class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left =0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            return true;
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
           else if(nums[mid]>=nums[left] )
            {
               if(nums[left] <= target && target < nums[mid])
                  right=mid-1;
                else
                   left=mid+1;
            }
           else if(nums[mid]<=nums[right] )
            {
               if(nums[mid] < target && target <= nums[right])
                  left=mid+1;
                else
                  right=mid-1;
               
            }


        }
        return false;

        
    }
};