#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    // CALCULATING THE GCD -- BY EUCLID'S METHODD
    cout<< gcd(20,28) << endl;
    return 0;

}