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

// Easy Version

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int startRow = 0, endRow = matrix.size() - 1;
        int startCol = 0, endCol = matrix[0].size() - 1;

        while (startRow <= endRow && startCol <= endCol) {
            // 1. Move Left → Right (Top row)
            for (int i = startCol; i <= endCol; i++) {
                ans.push_back(matrix[startRow][i]);
            }
            startRow++;

            // 2. Move Top → Bottom (Right column)
            for (int i = startRow; i <= endRow; i++) {
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;

            // 3. Move Right → Left (Bottom row)
            if (startRow <= endRow) {
                for (int i = endCol; i >= startCol; i--) {
                    ans.push_back(matrix[endRow][i]);
                }
                endRow--;
            }

            // 4. Move Bottom → Top (Left column)
            if (startCol <= endCol) {
                for (int i = endRow; i >= startRow; i--) {
                    ans.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
        }

        return ans;
    }
};
