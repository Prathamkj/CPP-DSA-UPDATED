// Stack
// Stack is the Last in First Out Function
// It follows the LIFO principle
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    stack<int> s1 ;
    s1.swap(s);
    // 2 stack ki vlaue ko swap

    // Last wala element firstt me aa jayega
    // cout<<s.top()<<endl;
    // pop function se top most element remove ho jayyega

    // jab tak stack is not empty
    while(!s.empty()){
        cout<<s.top()<<endl;
        // top ko print karwayee and woh pop bhi ho jaye
        s.pop();
    }

    cout<<endl;


}