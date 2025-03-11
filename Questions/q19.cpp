#include<iostream>
using namespace std;
// Count the number of occurances in the array of a particular element
int LinearSearch(int array[],int size, int target){
    int count = 0;  
    for(int i=0;i<size;i++){
        if(array[i]==target){
           count++;
        }
    }
    return count;
}
int main(){
    int array [7]={4,1,1,1,1,1,5};
    int size = 7;
    int target = 1;
    cout<< LinearSearch(array,size,target)<< endl;
    return 0;
}