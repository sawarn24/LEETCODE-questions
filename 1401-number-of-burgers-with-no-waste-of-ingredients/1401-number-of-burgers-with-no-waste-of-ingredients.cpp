class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int>ans(2);
        if (tomatoSlices == 0 && cheeseSlices == 0) {
            return {0, 0};
        }
        if(tomatoSlices % 2 != 0 ||tomatoSlices<2*cheeseSlices ||tomatoSlices>cheeseSlices*4 )
        {
            return {};
        }
        while(tomatoSlices>cheeseSlices*2)
        {
            ans[0]++;
            tomatoSlices-=4;
            cheeseSlices--;
        }
        ans[1]=cheeseSlices;
        return ans;
        
    }
};