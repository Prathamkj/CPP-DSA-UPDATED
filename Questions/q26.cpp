// Sort the NUmbers 0s , 1s and 2s 
// for the OPTIMAL Approach
// In a single loop
#include <iostream>
using namespace std;
int SortOptimal(int array[], int size){
    int low = 0;
    int middle = 0;
    int high = size -1;
    while(middle <= high){
        if(array[middle] == 0){
            swap(array[low], array[middle]);
            low++;
            middle++;
        }
        else if(array[middle] == 1){
            middle++;
        }
        else{
            swap(array[middle], array[high]);
            high--;
        }
    }
}

int PrintArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout<<endl;
}

int main(){
    int array[10] = {2,0,2,1,1,0,1,2,0,0};
    int size = 10;
    SortOptimal(array, size);
    PrintArray(array,size);
}