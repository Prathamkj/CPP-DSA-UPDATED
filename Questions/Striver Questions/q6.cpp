// LEFT ROTATE THE ARRAY BY D PLACESS

#include <iostream>
using namespace std;

int LeftRotate(int arr[] , int n , int d){

}

int PrintArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    LeftRotate(arr , n , d);    
    PrintArray(arr ,n);
    
}



