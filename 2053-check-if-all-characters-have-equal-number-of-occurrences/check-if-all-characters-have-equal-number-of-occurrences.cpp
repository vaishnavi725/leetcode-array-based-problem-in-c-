class Solution {
public:
    bool areOccurrencesEqual(string s) {
      vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int count = 0;

        for (int x : freq) {
            if (x != 0) {
                if (count == 0)
                    count = x;
                else if (count != x)
                    return false;
            }
        }
        return true;
    }
};