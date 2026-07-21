class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(auto ch : s) {
            int n = ch - 'a' + 1;
            while(n!=0) {
                int d = n % 10;
                sum += d;
                n /= 10;
            }
        }
        while(--k) {
        int t = 0;
        while(sum!=0) {
            int d = sum % 10;
            t += d;
            sum /= 10;
        }
        sum = t;
        }
        return sum;
    }
};