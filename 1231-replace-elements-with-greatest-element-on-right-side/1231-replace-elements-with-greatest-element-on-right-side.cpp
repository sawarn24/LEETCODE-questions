class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size() == 0) 
            return arr;
        int maxi=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        if(arr.size()==1)
        return arr;
        for(int i=arr.size()-2;i>=0;i--)
        {
            int temp = arr[i];  
            arr[i] = maxi;
            maxi = max(maxi, temp); 
             
        }
        return arr;
        
    }
};