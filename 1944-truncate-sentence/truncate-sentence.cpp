class Solution {
public:
    string truncateSentence(string s, int k) {
        int c = 0;
        string ans = "";
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') c++;  
            if(c==k)  return ans;
            ans += s[i];
        }
        return ans;
    }
};