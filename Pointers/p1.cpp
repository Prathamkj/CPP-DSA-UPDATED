#include <iostream>
using namespace std;
int main(){
    // pointters
    int num = 5;
    // so num has a specific address
    // adderess of operator - &
    cout << "address of num is " << &num << endl;
    // pointer uses for storingg the address
    int *p = &num;
    // *p - means value at the address p
    cout << "value at the address p is " << *p << endl;
    // size
    cout << "size of integer is "<< sizeof(num) << endl;
    cout << "size of pointer is "<< sizeof(p) << endl;
    // we can also initialize this way
    int i = 8;
    int *p1 = 0;
    p1 = &i;
    cout<<"Address of the poinnter is "<< p1 << endl;
    cout<<"pointer value is "<< *p1 << endl;
    // 
    int a = 5;
    int *p2 = &a;
    cout<<"before" << a << endl;
    // here the value will be incremented
    (*p2)++;
    cout<<"after" << a << endl;
    // ek pointter and dusre pointer ko copy karna hai
    int *p3 = p2;
    cout<<"value of p3 is "<< *p3 << " and value of p2 is "<< *p2 << endl;
    // so both the values will be the same
    // 
    



    return 0;
}