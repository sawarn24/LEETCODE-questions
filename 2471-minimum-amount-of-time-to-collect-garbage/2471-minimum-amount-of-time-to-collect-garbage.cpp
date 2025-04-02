class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       vector<int> prefix(travel.size() + 1, 0);

        for (int i = 0; i < travel.size(); i++) {
            prefix[i + 1] = prefix[i] + travel[i];
        }

        int countG = 0, countP = 0, countM = 0;  
        int lastIndexG = -1, lastIndexP = -1, lastIndexM = -1;  

        for (int i = 0; i < garbage.size(); i++) {  
            for (char ch : garbage[i]) {  
                if (ch == 'G') {
                    countG++;
                    lastIndexG = i;
                } 
                else if (ch == 'P') {
                    countP++;
                    lastIndexP = i;
                }
                else if (ch == 'M') {
                    countM++;
                    lastIndexM = i;
                }
            }
        }

        int result = 0;
        result += countP + (lastIndexP >= 0 ? prefix[lastIndexP] : 0);
        result += countM + (lastIndexM >= 0 ? prefix[lastIndexM] : 0);
        result += countG + (lastIndexG >= 0 ? prefix[lastIndexG] : 0);

        return result;
    }


        
    
};