class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       
       for(int i=0;i<matrix.size();i++){
         map<int,int>mp;
        for(int j=0;j<matrix.size();j++){
            mp[matrix[i][j]]++;
        }
        for(int k=1;k<=matrix.size();k++){
            if(mp[k]!=1) return false;
        }
       }

       for(int j=0;j<matrix.size();j++){
        map<int,int>mp;
        for(int i=0;i<matrix.size();i++){
            mp[matrix[i][j]]++;
        }
        for(int k=1;k<=matrix.size();k++){
            if(mp[k]!=1) return false;
        }
       }
       return true;
    }
};