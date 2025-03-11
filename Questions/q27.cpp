#include <iostream>
using namespace std;

// MOVE ZEROES TO THE END OF ARRAY

int ZeroSort(int array[], int size){
    // Humne yaha non zeroes ko swap kar diya insted of zeroes
    int nonZero = 0;
    for (int i = 0; i < size; i++){
        if(array[i] != 0){
            swap(array[i], array[nonZero]);
            // nonZero jo zero index se chalu ho rha hai and badhte jaa rha hai compare karte karte
            nonZero++;
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
    int array[5] = {1,1,0,0,12};
    int size = 5;
    ZeroSort(array, size);
    PrintArray(array,size);
}