#include <iostream>
using namespace std;
// Sort 0s , 1s , 2s int the array


// This is optimizedd approachhh
int SortArray(int array[], int size){
    // make 3 counts
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(int i = 0; i < size; i++){
        if(array[i] == 0){
            count1++;
        }
        else if(array[i] == 1){
            count2++;
        }
        else {
            count3++;
        }
    }
    // is loop se humne count store kar liyaaaa
    for(int i = 0; i < count1; i++){
        // 1 st loop is for 0 valuee
        array[i] = 0;
    }
    for(int i = count1; i < count1+ count2; i++){
        array[i] = 1;
    }
    for(int i = count1+count2; i < size ; i++){
        array[i] = 2;
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
    SortArray(array, size);
    PrintArray(array,size);
}
// this is 0(2n) - which is 2 itterations