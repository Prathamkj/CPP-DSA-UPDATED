Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int maxEle=row*col;
        int startRow=0;
        int endRow=row-1;
        int startCol=0;
        int endCol=col-1;

        int count=0;
        while(count<maxEle){
            //printing starting ki row
            // for this we took start coln to end coln 
            // The condition count < maxEle ensures we stop exactly after visiting all elements.
            for(int i=startCol;i<=endCol && count<maxEle ;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            //printing ending ki colr
            for(int i=startRow;i<=endRow && count<maxEle;i++){
                ans.push_back(matrix[i][endCol]);
                 count++;
            }
            endCol--;
            //printing ending ki row
            for(int i=endCol;i>=startCol && count<maxEle;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            //printing start ki col
            for(int i=endRow;i>=startRow && count<maxEle;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }startCol++;
        }
        return ans;

    }
};