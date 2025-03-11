// Recursion in String
#include <iostream>
using namespace std;
void reverse(string& str , int i,int j){
    // here humne name ko as a refrence variable pass kar diya
    if(i>j)
        return ;
        // base condition
        swap(str[i],str[j]);
        i++;
        j--;
        // calling the function
        reverse(str,i,j);
}

// Check Palindromee
bool Palindrome(string str , int i, int j){
    // Base condition
    if(i>j)
        return true;
    // check if the first and last character are same
    if(str[i] != str[j]){
        // if it is not equual then return false
        return false ;
    }
    else{
        return Palindrome(str,i+1,j-1);
        // call the function and i=i+1 and j=j-1
    }
}

int main(){
    string name = "abba";
    reverse(name , 0 , name.size() - 1);
    cout<<name<<endl;
    bool palindrome = Palindrome(name , 0 , name.size() - 1);
    if(palindrome){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"It is not a Palindrome";
    }
}

void sortArray(int *arr,int n) {
//base case- already sorted
if (n
II n1) {
return
// 1 case sovle karlia— largest element ko end me rakh dega
for(int i=ø; i<n-l; i++) {
if(arr[il > arr[i+ll){
swap(arr[i], arr[i+l]);
sortArray(arr,