class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altMax = 0,altCurr = 0;
        for (int i=0;i<gain.size();i++){
            altCurr += gain[i];
            altMax = max(altMax,altCurr);
        }
        return altMax;
    }
};