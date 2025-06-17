#include <iostream>
#include <cmath>
using namespace std;
// Power of 2
int main(){
    int n = 100;
    cout << PowerOfTwo(n)<<endl;
}

int PowerofTwo(int n){
    for(int i=0; i<30; i++){
        int answer = pow(2,i);
        if(answer == n){
            return true;
        }
    }
    return false;
}
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        int answer = 1;
        for(int i = 0; i<=30 ; i++){
            if(answer == n){
                return true;

            }
            if(answer < INT_MAX/2)
                answer = answer * 2;
            
        }
        return false;
    }
};*/

// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        if(n==0) {
            return false;
        }
        while (n > 0){
            if(n==1) return true;
            if(n % 2 != 0) break;
            n = n /2;
        }
        return false;
    }
};