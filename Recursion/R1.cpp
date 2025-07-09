#include <iostream>
using namespace std;
// Recursion
int factorial(int n){
    // base case likho pahale 
    // isme return likhnna mandatory hai
    if(n==0){
        // tab tak factorial nikalna hai jab tak n=0 na ho
        return 1;
    }
    // int small = factorial(n-1);
    // // int big = n * small;
    // return n * small;
    // or
    return n * factorial(n-1);
}
// power
int power(int n){
    if(n==0){
        return 1;
    }
    return 2 * power(n-1);
}
// counting - print
int counting(int n){
    if(n==0){
        return 1;
    }
    // input aya and print karwaya
    counting(n-1);
    cout << n << endl;
}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin >> n;
    int ans = factorial(n);
    cout<< ans << endl;
    // 
    int ans1 = power(n);
    cout<< ans1 << endl;
    // 
    int ans2 = counting(n);
    cout<< ans2 << endl;
    return 0;   
}