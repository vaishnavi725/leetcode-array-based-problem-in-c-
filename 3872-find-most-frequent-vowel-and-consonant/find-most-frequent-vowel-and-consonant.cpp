class Solution {
public:
    int maxFreqSum(string s) {
       map<char,int>f;
     
            int m=0;
        int m1 = 0;
        for(auto a : s) {
            f[a]++;
            if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'){
                m=max(m,f[a]);
            }
            else{
                m1=max(m1,f[a]);
            }
        }
        
        return m + m1;

    }
};