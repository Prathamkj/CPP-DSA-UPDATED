// CHECKING IF ARRAY IS SORTED AND ROTATED
#include <iostream>
using namespace std;



// for checking of sorted array
bool isSorted(int arr[], int n) {
    for(int i=0; i<n; i++){
        if (arr[i - 1] >= arr[i]){
        }
        else{ 
            return false;
        }
    }
    return true;
}
int main(){
    int array[6] = {11,12,13,14,15};
    int size = 6;
    cout<<isSorted(array,size)<<endl;
}