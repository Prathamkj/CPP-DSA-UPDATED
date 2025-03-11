#include<iostream>
using namespace std;
// Sum of digits of the Number
int SumofDigits(int num){
    int digitSum = 0;
    while (num>0)
    {
        int lastDigit = num % 10;
        // isse 10 se modulas karne pe last digit aayega
        digitSum = digitSum + lastDigit;
        
        num = num / 10;
        // isse last digit hat jayega
    }
    
    return digitSum;
}
int main(){

    cout<<"Sum = "<<SumofDigits(99999);
    return 0;

}