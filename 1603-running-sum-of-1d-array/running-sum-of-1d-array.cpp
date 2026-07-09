class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
         int a = 0;

        for(int i = 0; i < n; i++) {
            int b = nums[i];
                ans.push_back(a+b);
            a = a + b;
            }   
        return ans;
    }
};