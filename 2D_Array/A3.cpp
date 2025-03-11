#include <iostream>
using namespace std;
// BINARY SEARCH IN 2D MARIX
class Solution {
public:
    bool searchINrow(vector<vector<int>>& matrix, int target , int row){
        int n = matrix[0].size();
        int st = 0, e = n-1;
        while(st<=e){
            int mid = st + (e - st)/2;
            if(target == matrix[row][mid]){
                return true;
                // yaha check kar liya
            }
            else if(target > matrix[row][mid]){
                st = mid + 1;
            }
            else{
                e = mid -1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        // n is column
        int m = matrix.size();
        // m is rows
        int st = 0;
        int e = n -1;
        while(st<=e){
            int mid = st + (e - st)/2;
            if(matrix[mid][0] <= target && matrix[mid][n-1] >= target){
                // found the row and applying bs on it
                return searchINrow(matrix , target , mid);

            }
            else if(matrix[mid][n-1] < target){
                st = mid + 1;
                // down direction me
            
            }
            else{
                // target < matrix[mid][o] 
                e = mid -1;
            }
        }
        return false;
    }
};

// 240. Search a 2D Matrix II

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        // n is total number of columnss

        int row = 0;
        int column = n - 1;
        while(row < m && column >=0){
            if(target == matrix[row][column]){
                return true;
            }
            else if(target < matrix[row][column]){
                column--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};