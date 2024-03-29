class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        //checks all rows
        for(int i=0; i<matrix.size(); i++){
            set<int> s;
            for(int j=0; j<matrix[0].size(); j++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!= matrix[0].size()){
                return false;
            }

        }
            //checks all columns
        for(int i=0; i<matrix.size(); i++){
            set<int> s;
            for(int j=0; j<matrix[0].size(); j++){
                s.insert(matrix[j][i]);
            }
            if(s.size()!= matrix[0].size()){
                return false;
            }

        }
        return true;
    }
};