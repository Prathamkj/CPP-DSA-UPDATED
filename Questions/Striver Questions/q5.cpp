// LEFT ROTATE AN ARRAY BY ONE PLACE
#include <iostream>
using namespace std;

int LeftRotate(int arr[] , int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int PrintArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    LeftRotate(arr , n);
    PrintArray(arr ,n);
    
}
