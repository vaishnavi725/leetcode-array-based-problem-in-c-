class Solution {
public:
    int passwordStrength(string password) {
        set<char> myset;

        for(auto a : password) {
            myset.insert(a);
        }
         int sum = 0;
        
        for(auto a : myset) {
            if(a >= 'a' && a <= 'z') {
                sum += 1;
            }
            else if(a >= 'A' && a <= 'Z') {
                sum += 2;
            }
            else if(a >= '0' && a <= '9') {
                sum += 3;
            }
            else {
                sum += 5;
            }  
        }
        return sum;
    }
};