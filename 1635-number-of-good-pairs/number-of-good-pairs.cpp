class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(auto a : nums) {
        mp[a]++;
       }
       int ans =0;
       for(auto a : mp) {
        int n = a.second;
        ans += ((n-1)*n)/2;
       }
       return ans;
    }
};