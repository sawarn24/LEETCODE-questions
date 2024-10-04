class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        int s=skill[i]+skill[j];
        long long res=skill[0]*skill[j];
        i++;
        j--;
        while(i<j+1)
        {
           if(skill[i]+skill[j]==s)
           {
            res+=(skill[i]*skill[j]);
            i++;
            j--;
           }
           else
           {
            return -1;
           }

        }
        return res;
        
    }
};