#include<iostream>
using namespace std;
// THIS CODE IS FOR THE 
// SUBTRACT THE PRODUCT AND SUM OF  DIGITS OF AN INTEGER
int SumandProduct(int n){
    int product = 1;
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n = n / 10;
    }
    int answer = product - sum;
    return answer;
}
int main(){
   
    cout<<SumandProduct(12345)<<endl;
    return 0;
}