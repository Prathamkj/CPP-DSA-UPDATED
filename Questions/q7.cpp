// power of (a,b)
#include<iostream>
using namespace std;  
int Power(){
    int a,b;
    cout<<"Enter the number of a";
    cin >> a;
    cout<<"Enter the number of b";
    cin >> b;
    int answer = 1;
    for(int i=1; i<=b;i++){
        answer = answer * a;
    }
    return answer;
}  
int main(){

    int answer = Power();
    cout<<answer;
    return 0;
}
