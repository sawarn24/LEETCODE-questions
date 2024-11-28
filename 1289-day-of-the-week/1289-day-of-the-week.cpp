class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month==1)
        {
            month=13;
            year-=1;
        }
        if(month==2)
        {
            month=14;
            year-=1;
        }
        int res=(day + (13 * (month + 1) / 5) + year % 100 + (year % 100) / 4 + (year / 100) / 4 - 2 * (year / 100)) % 7;
         if (res < 0) {
            res += 7;
        }
        if (res == 0) return "Saturday";
        if (res == 1) return "Sunday";
        if (res == 2) return "Monday";
        if (res == 3) return "Tuesday";
        if (res == 4) return "Wednesday";
        if (res == 5) return "Thursday";
        if (res == 6) return "Friday";
        return "";

        
        
    }
};