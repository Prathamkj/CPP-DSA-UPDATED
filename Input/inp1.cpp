// Taking Input
#include <iostream>
// for vector or inbuilt functions we use
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value of n : ";
    cin >> n;
    // first input is size of the array 
    // and second is element of the array
    // for Array input 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    // For Vector Input 
    vector<int> arr;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    } 

    // Imp - size of Array is not given 
    // For N is not given
    // Input - 1 2 3 4 5 6
    // consider date into the string first
    // "1 2 3 4 5 6"
    string s;
    getline(cin, s);
    // taking the input of string with use of getline
    // normal cin >> stops at spaces. getline() reads the full line.
    // converting string into array
    // string stream -- it will convert string into int values
    stringstream ss(s);
    // now we create an array
    vector<int> arr;
    int num;
    // Now we extract numbers from string and pushing it to the array
    while(ss >> num){
        // reading integer from string and store it to num
        arr.push_back(num);
    }
    // to traverse
    for(auto val : arr){
        cout<< val << " ";
    }



    // for Comma Seprated Values
    // And n is not given
    // input - 1,2,3,4,5,6
    // output - 1 2 3 4 5 6
    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<int> arr;

    string temp;
    while(getline(ss, temp, ',')){
        // taking input from ss and into temp and on the basis of coma ,
        // if comma ki gajah space ho toh
        // it will be space seprated values
        int num = stoi(temp);
        // stoi - string to integer 
        // all the temp value will be stored into int in num
        arr.push_back(num);
    }
    // traverse -- 
    for(auto a : arr){
        cout<<a<<" ";
    }


    // If input is given like 
    // [1,2,3,4,5,6] or 
    // {1,2,3,4,5,6}
    string s;
    getline(cin,s);
    vector<int> arr;

    if(s.front() == '{' && s.back()=='}'){
        s=s.substr(1,s.length()-2);


    }
    // now rest of things work as same











    // Printing the Array
    for(auto val : arr){
        cout<<val<<" ";
    }
    return 0;
}