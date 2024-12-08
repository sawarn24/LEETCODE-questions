class Solution {
public:
bool hasOnlySetBits(int num) {
    return (num & (num + 1)) == 0;
}
    int smallestNumber(int n) {
    


    while (!hasOnlySetBits(n)) {
        n++;
    }
    return n;


        
    }
};