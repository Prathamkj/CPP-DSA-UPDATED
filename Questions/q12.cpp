#include <iostream>
using namespace std;
// Duplicates in Array
// EK NUMBER JO DO BAAR ATA HAI
int Duplicate(int arr[],int size){
    int answer = 0;
    // here hum sare element ko xor karenge so jisse hume 0 milege
    for(int i=0;i<size;i++){ 
        answer = answer^arr[i];
    }
    // in second loop hum 0 ko duplicate se xor karenge from n-1
    for(int i=1;i<size;i++){
        answer = answer^i;
    }
    return answer;

}


int main(){
    int array[5] ={1,2,3,4,3};
    int size = 5;
    cout<<Duplicate(array,size);

}