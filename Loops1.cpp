#include<iostream>
using namespace std;
int main(){
    // Sum of n Numbers
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        sum = sum + i;
    }
    cout<<"Sum is = "<<sum<<endl;

    // Sum of Odd Number
    int OddNumberSum = 0;
    for (int j = 1; j <= 10; j++){
        if (j % 2 != 0){
            OddNumberSum = OddNumberSum + j;
        }
    }
     cout<<"OddNumberSum is = "<<OddNumberSum<<endl;


    // Prime Number
    int PrimeNumber = 0;
    
    return 0;
}