class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxleft=0,maxright=0;
        int total=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                if(height[left]<maxleft)
                {
                    total+=maxleft-height[left];
                }
                else
                maxleft=height[left];
                left++;
            }
            else
            {
                if(height[right]<maxright)
                total+=maxright-height[right];
                else
                maxright=height[right];
                right--;
            }
        }
        return total;
        
    }
};