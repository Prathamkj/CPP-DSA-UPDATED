#include<iostream>
// Prime NUmber
using namespace std;
bool PrimeNUMber(int n){
    for (int i = 2;i<=n-1;i++){
        if(n%i==0){
            return 0;

        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the prime number ";
    cin>>n;
    if(PrimeNUMber(n)){
        cout<<"It is a prime number ";

    }   
    else{
        cout<<"It is not a prime number";
    } 
    return 0;

}