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
        for(int j = 0;i< cols; j++){
            Row = Row + arr[i][j];
        }
        maxRowSum = max(maxRowSum,Row);
    }
    return maxRowSum;
}

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
                diagonalSum = diagonalSum + array[i][j];
            }
            else if(j == n-i-1){
                // for secondary diagonal
                diagonalSum = diagonalSum + array[i][j]

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