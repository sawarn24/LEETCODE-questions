int removeElement(int* nums, int numsSize, int val) {
    int xyz=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
           
                nums[xyz]=nums[i];
                xyz++;
                
            
        }
    }
    
    return xyz;
    
}