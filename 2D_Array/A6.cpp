73. Set Matrix Zeroes
// Brute Force Approach
class Solution {
public:
    void markRow(vector<vector<int>>& matrix, int m, int i) {
        for (int j = 0; j < m; j++) {
            // first mark the row here
            // to the -1 if it is not equal to zero
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    void markCol(vector<vector<int>>& matrix, int n, int j) {
        for (int i = 0; i < n; i++) {
            // mark coln here to -1 if it is not equal to zero
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        // First pass: mark rows and columns using -1
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    markRow(matrix, m, i);
                    markCol(matrix, n, j);
                }
            }
        }

        // Second pass: convert all -1 to 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Better Approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0);  // assigning initially row and col to = 0
        vector<int> col(m, 0);  // 

        // First pass: mark rows and columns to be zeroed
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Second pass: set cells to 0 if their row or column is marked
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
