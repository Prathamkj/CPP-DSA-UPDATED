
// STRING
// This is Character Array
#include <iostream>
using namespace std;
// Palindrome of string
bool palindrome(char ch[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(ch[s] != ch[e])
        {
            return false;
            // Not a palindrome character
        }
        else{
            s++;
            e--;
            // nhi toh s ko aage and e ko peecha le aao
        }
    }
    // so it is a palindrome character
    return true;
}
int geTlenght(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        // jab tak null character nhi milta tab takk
        // yani whi lenght hai
        // '\0' is the null character which is used to end the string
        count++;

    }
    return count;
}


// To lower case 
char tolowercase(char ch){
    if(ch >='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
    }


}
int main(){
    // 10 character ka array
    char ch[13];
    cout << "Enter a character: ";
    cin.getline(ch,13);
    cout << ch << endl;
    // getline se space wale bhi print ho jayenge
    int n = geTlenght(ch);
    cout<<palindrome(ch,n);
    cout << " Character is "<<tolowercase('B');
    // 

}