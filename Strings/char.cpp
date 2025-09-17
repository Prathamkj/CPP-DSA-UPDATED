// string is just one dimensional characterr array
// STRING
#include <iostream>
using namespace std;
// Lenght of the string
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
// Reverse a string
void reverse(char ch[] ,  int n){
    
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}


int main(){
    // 10 character ka array
    char ch[10];
    cout << "Enter a character: ";
    cin>>ch;
    
    cout<< "your name is ";
    int len = geTlenght(ch);
    // in input cin stops the - space , tab and Enter 
    // when value is added eg - pratham jaulkar in input

    // LENGHT OF STRING
    cout<<"length of string is "<<geTlenght(ch)<<endl;
    
    // REVERSE A STRING
    cout << "Reversed Strig is " << reverse(ch,len);

    cout<<ch<<endl;
}