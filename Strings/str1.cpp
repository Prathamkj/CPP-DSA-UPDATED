// VALID PALINDROMEE
#include <iostream>
using namespace std;
// here we use upper case and lower case characters
// USING 2pointer approach

// tolower(ch) -> upper case ka charaacter lower case me kardega 

bool Palindrome(){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        if(!isAlpha(str[s])){
            s++;
            continue;
        } mn
        if(!isAlpha(str[e])){
            e--;
            continue;
        }
        // if character is aplha numeric the aage ya peecha sirf badana hai
        // Agar upper case hai to lower case me badalna hoga
        if(tolower(str[s]) != tolower(str[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;

}

// if character alpha numeric hai toh sirf ++ ya -- karke check karege
// 

bool isAlpha(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z') ){
        return true;
    }
    return false;
}