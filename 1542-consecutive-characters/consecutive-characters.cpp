class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int c = 1, m = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                c++;
            }
            else {
                c = 1;
            }
            m = max(m,c);
        }
        return m;
    }
};