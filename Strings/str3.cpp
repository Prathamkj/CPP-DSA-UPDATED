#include <iostream>
using namespace std;

// 1910. Remove All Occurrences of a Substring

//  string find() is a library function used to find the first occurrence of a sub-string in the given string
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.size()!=0 && s.find(part) < s.size()){
//             s.erase(s.find(part),part.size());
//         }
//         return s;
//     }
// };

// REVERSE WORDSS IN A STRING 

string reversewords(string s){
    // first we create an ans string 
    string ans = "";

    // then we reverse the whole entire string
    reverse(s.begin() , s.end());
    // now hum individual words ko idenntify karke reverse karengee

    for(int i=0; i<s.size() ; i++){
        string word = "";
        // yaha hum word ko banake usko reverse karengee
        // isme hum hamere word ko identify karke reverse karengee
        while(i < s.size() && s[i] != ' '){
            word = word + s[i];
            i++;
        }
        reverse(word.begin() , word.end());
        if(word.size() > 0){
            ans = ans + word + " ";
        }
    }
    return ans.substr(1);
} 


int main(){

}
