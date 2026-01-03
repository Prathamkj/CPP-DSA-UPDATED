#include <iostream>
using namespace std;

// Linear Search 
bool linearSearch(int arr[4][3] , int rows , int cols , int key){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

// Maximum row sum
int maxRowSum(int arr[4][3] , int rows , int cols){
    int maxRowSum = INT16_MIN;
    for(int i = 0; i < rows; i++){
        int Row = 0;
        for(int j = 0;j< cols; j++){
            Row = Row + arr[i][j];
        }
        maxRowSum = max(maxRowSum,Row);
    }
    return maxRowSum;
}
/*
Outer loop (i) iterates through each row.

Inner loop (j) goes through each element in that row.

Row keeps the sum of elements in the current row.

After each row, update maxRowSum if Row is greater.

*/
// Maximum column sum
int maxColumnSum(int arr[4][3], int rows, int cols) {
    int maxColSum = INT_MIN;  // Initialize maxColSum to a very small value
    
    for (int j = 0; j < cols; j++) {  // Iterate over each column
        int colSum = 0;  // Variable to store sum of current column
        
        for (int i = 0; i < rows; i++) {  // Iterate over each row
            colSum += arr[i][j];  // Add element to column sum
        }

        maxColSum = max(maxColSum, colSum);  // Update maxColSum if current column sum is greater
    }

    return maxColSum;  // Return the maximum column sum found
}
/*
Outer loop (j) iterates through each column.

Inner loop (i) collects elements vertically from each row in that column.

colSum stores the sum of that column.

Update maxColSum accordingly.
*/

// To print the Row Sum of each row in the matrix
void printRowSum(int arr[][3], int rows , int cols){
    for(int i= 0 ; i<rows ;i++){
        // row sum ke liye sabse pahale row ka array likhenge
        // and for column sum sabase pahale column ka array ka loop chalayenge 
        int sum = 0;
        for(int j=0 ; i<cols ;j++){ 
            sum = sum + array[i][j];
        }
        cout<< sum << endl;
    }

}
// Printing The Diagonal sum
int diagonalSum(int arr[4][4] , int n){
    int diagonalSum = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j){
                // for primary diagonal
                // if i == j then it is a condition for diagonal
                diagonalSum = diagonalSum + array[i][j];
            }
            else if(j == n-i-1){
                // j == n-i-1 it is a condition for secondary diagonal
                // for secondary diagonal
                diagonalSum = diagonalSum + array[i][j];

            }
        }
    }
    return diagonalSum;
}

int main(){

    // Linear Search on 2D Array
    int arr[4][3] = {{1,2,3} , {4,3,6}, {4,6,9}, {4,10,11}};
    int rows = 4;
    int cols = 3;

    cout<<linearSearch(arr , rows , cols , 9)<<endl;

    cout<<"Max Row sum is "<<maxRowSum(arr, rows , cols);

}