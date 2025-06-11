#include <iostream>
using namespace std;

// 1910. Remove All Occurrences of a Substring

//  string find() is a library function used to find the first occurrence of a sub-string in the given string
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size() != 0 && s.find(part) < s.size()){
            // Find the index where 'part' occurs in 's'
            // Erase 'part' from 's' starting from that index
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};

✅ Loop:
🔹 Iteration 1: i = 0 → s[0] = 'm' → not space → continue
🔹 Iteration 2: i = 1 → s[1] = 'y' → not space → continue
🔹 Iteration 3: i = 2 → s[2] = ' ' → SPACE FOUND
Now:

cpp
Copy
Edit
reverse(s.begin() + 0, s.begin() + 2);
This reverses characters at index 0 to 1

"my" → "ym"

Now s = "ym code"
Set start = 3 (next word starts after space)

🔹 Iteration 4: i = 3 → s[3] = 'c'
🔹 Iteration 5: i = 4 → s[4] = 'o'
🔹 Iteration 6: i = 5 → s[5] = 'd'
🔹 Iteration 7: i = 6 → s[6] = 'e'
🔹 Iteration 8: i = 7 → END OF STRING (i == s.size())
cpp
Copy
Edit
reverse(s.begin() + 3, s.begin() + 7);









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
