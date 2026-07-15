class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        for(int i = 0; i < names.size(); i++) {
            mp[heights[i]] = names[i];
        }
        vector<string> s;
        for(auto a: mp) {
            s.push_back(a.second);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};