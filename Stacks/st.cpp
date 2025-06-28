#include<iostream>
using namespace std;
// Here we are seeing implementation of stack using stl
#include<stack>
int main(){

    // Stack Using STL
    stack<int> st;
    // pusing elements into it
    st.push(1);
    st.push(2);
    st.push(3);

    // Now printing element
    while(!st.empty()){
        // jab tak stack is not empty
        cout<<st.top()<<" ";
        // tab tak print the top element
        st.pop();
        // and remove the top element
    }

    // 
    // Create a copy
    // stack<int> temp(st);
    // we can effectively traverse without modifying the original stack.


}