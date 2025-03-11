#include<iostream>
using namespace std;
int LinearSearch(int array[],int size, int target){
    // for loop is for funning through whole
    
    // and in if conditionn we checck if array is equal to target and return i
    for(int i=0;i<size;i++){
        if(array[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int array []={4,2,1,8,3,7,5};
    int size = 7;
    int target = 1;
    cout<< LinearSearch(array,size,target)<< endl;
    return 0;
}
// LINEAR SEARCH
// IF TARGET KI VALUE MIL JAYE TOH USKI VALUE AND INDEX RETURN KARDO
// IF N0. MATHC NHI HUA THE RETURN -1