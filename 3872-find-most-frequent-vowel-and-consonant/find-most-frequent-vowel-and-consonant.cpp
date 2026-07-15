class Solution {
public:
    int maxFreqSum(string s) {
       map<char,int>f;
        vector<char> s1;
        vector<char> s2;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' ||s[i]=='o' ||s[i]=='u') {
            s1.push_back(s[i]);
        }
        else{
            s2.push_back(s[i]);
        }
        }
        int m = 0;
        for(auto a : s1) {
            f[a]++;
            m = max(m,f[a]);
        }
        int m1 = 0;
        for(auto a : s2) {
            f[a]++;
            m1 = max(m1,f[a]);
        }
        
        return m + m1;

    }
};