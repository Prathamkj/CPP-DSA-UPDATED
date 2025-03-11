// Merge 2 sorted array

#include <iostream>
using namespace std;
void merge(int array1[], int n , int array2[] , int m , int array3[]){

    // 2 loops for 2 arrays
    int i = 0 , j = 0;
    int k = 0;
    while(i < n && j < m){
        // jab tak i pahale wale ka size se chota hai and j dusre wale ke size se chota hai
        // first dono loops ke liye
        // 
        if(array1[i] < array2[j]){
            array3[k] = array1[i];
            k++;
            i++;
        }
        else{
            array3[k] = array2[j];
            k++;
            j++;
        }
    }
    // baad ke do loop isliye chalaye taki koi element bacha ho toh cover ho jaye
    while(i<n){
        // n is size of array 1
        array3[k] = array1[i];
        k++;
        i++;
        // Answer and i dono ko badda dengee
    }

    while(j<m){
        // m is size of array 2
        array3[k] = array2[j];
        // answer ka k array2[k]
        k++;
        j++;

    }
}

void print(int array3[] , int n){
    for(int i=0; i<n; i++){
        cout<<array3[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int array1[5] = {1,3,5,7,9};
    int array2[3] = {2,4,6};

    int array3[8] = {0};
    // 5 and 3 are size of arrays
    merge(array1, 5, array2, 3, array3);

    print(array3 , 8);

}