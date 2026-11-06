class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr= 30 * hour + 0.5 * minutes;
        double mi= 6 * minutes;

        double angle= abs(hr-mi);

        angle=min(angle,360-angle);
        return angle;
    }
};