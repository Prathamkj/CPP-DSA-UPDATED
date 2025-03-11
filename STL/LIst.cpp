#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    // push front 
    list.push_front(4);
    list.push_front(5);
    // pop
    list.pop_front();

    for(int val : list){
        cout << val << " ";
    }

}
