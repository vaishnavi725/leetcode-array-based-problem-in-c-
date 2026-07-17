class Solution {
public:
    int minimumChairs(string s) {
      int chairs = 0;
      int m = 0;
      for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'E') {
            chairs++;
        }
        else {
            chairs--;
        }
        m = max(m,chairs);
      }
      return m;
      }
      
};