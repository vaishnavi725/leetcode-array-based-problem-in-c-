class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x : nums) {
            mp[x]++;
        }
        int sum = 0;
                for(auto a : mp) {
                    if(a.second%k==0){
                 sum += a.first * a.second;
            }
        }
        return sum;
    }
};