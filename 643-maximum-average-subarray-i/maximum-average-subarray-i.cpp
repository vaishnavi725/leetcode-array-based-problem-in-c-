class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
           int i = 0;
           int j =0;
           int n = nums.size();
           int s = 0;
           for(; j < k; j++) {     
            s += nums[j];
           }
           int mx = s;
           for(; j < n; j++) {
            s -= nums[i];
            s += nums[j];
            i++;
            mx = max(mx,s);
           }
           return (mx/(k*1.0));
    }
};