class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sumMax , sum = 0;

        for (int i=0;i<k;i++){
            sum+=nums[i];
        }
        sumMax = sum;

        for (int i=k;i<nums.size();i++){
            sum += nums[i]-nums[i-k];
            sumMax = max(sum,sumMax);
        }

        return sumMax/k;
        
    }
};