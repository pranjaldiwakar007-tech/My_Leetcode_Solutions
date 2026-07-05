class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x=hour+ minutes/60.0;
        double diff1=fmod(11.0*x,12.0);
        double diff2=12-diff1;
        return min(diff1,diff2)*30.0;
    }
};