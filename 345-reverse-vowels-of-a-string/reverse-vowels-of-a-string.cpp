class Solution {
public:
    bool isVowel(char ch) {
         if(ch == 'a' ||ch == 'A' ||ch == 'e' ||ch == 'E' ||ch == 'i' ||ch == 'I' |ch == 'o' ||ch == 'O' ||ch == 'u' ||ch == 'U') {
            return true;
         }
         else {
            return false;
         }
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i =0,j = n-1;
        while(i <= j) {
            if(isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i]) && !isVowel(s[j])) {
                j--;
            }
            else if(!isVowel(s[i]) && isVowel(s[j])) {
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};