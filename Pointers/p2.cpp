#include <iostream>
using namespace std;
// pointers
int main(){
    // pointer in Array
    int arr[10] = {1,2,3,4,5,6,7};
    cout<< "adderess of first memory block"<< arr << endl;
    // one more way
    cout<< "adderess of first memory block"<< &arr[0] << endl;
    cout<<"to print first value :- "<<*arr<<endl;
    cout << "to print next value :- "<< *(arr+1)<<endl;
    cout << "to add in value "<< (*arr)+2<<endl;
    // so formula will be
    // arr[i] = *(arr + i)

    // pointers in character Arrays
    char ch[6] = "abcde";
    char *c = &ch[0];
    cout << " "<< c<<endl;
    // cout in character array me different hoga
    // isme cout<< ch - karne pe characters print honge
    cout << "to print first character :- "<< *ch<<endl;
    return 0;
}