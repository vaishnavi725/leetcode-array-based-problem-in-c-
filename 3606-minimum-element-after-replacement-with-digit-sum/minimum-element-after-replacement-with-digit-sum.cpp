class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            int num = nums[i];
            while(num!=0) {
                int d = num%10;
                sum += d;
                num /= 10;
            }
            mn = min(mn,sum);  
        }
        return mn;
    }
};