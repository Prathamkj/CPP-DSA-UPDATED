240. Search a 2D Matrix II

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        // n for row and m for column
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            int st = 0;
            // start and end of the row
            int end = m*n - 1;
            while(st <= end){
                int mid = st + (end - st) / 2;
                int row = mid/m;
                int col = mid%m; 
                if(matrix[row][col] == target){
                    return true;
                }
                else if(matrix[row][col] > target){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            
        }
        return false;

    }
};