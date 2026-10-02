class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle;
        double hourangle;

        minangle=minutes*6;
       
        hourangle=(hour%12)*30+minutes*0.5;
        return min(360-abs(minangle-hourangle),abs(minangle-hourangle));
    }
};