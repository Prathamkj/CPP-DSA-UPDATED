#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin , str);
    // taking input of the string

    int vowels = 0;
    int cons = 0;

    for(auto val : str){

        if(isalpha(val)){
            char ch = tolower(val);
            // converting into lower first to solve it easily 

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }
            else{
                cons++;
            }
        }
    }

    cout<<vowels<<" "<<cons;
    // printed in the spaces 
    return 0;   
}