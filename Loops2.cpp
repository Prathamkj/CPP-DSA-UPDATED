#include<iostream>
using namespace std;
// PRIME NUMBER
int main(){
    int n = 7;
    bool isPrime = true;
    // we can also do i*i <= n in  place of i <= n-1

    for(int i = 2; i<=n-1;i++){
        // 2 se n-1 tak chalega loop
        if (n % i==0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
    
}