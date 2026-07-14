class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int freq[100] = {0};
        for(auto a : nums) {
            freq[a]++;
        
        if(freq[a] == 2) {
            ans.push_back(a);
        }
        }
        return ans;
    }
};