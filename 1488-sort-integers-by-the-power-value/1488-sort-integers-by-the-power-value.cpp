class Solution {
public:
   static  int power(int x) {
    int steps = 0;
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        steps++;
    }
    return steps;
}
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>res;
        for(int i=lo;i<=hi;i++)
        {  
            res.push_back({power(i),i});

        }
        sort(res.begin(),res.end());
        return res[k-1].second;
        
    }
};