#include <iostream>
#include <vector>
// we do not need to include a pair
using namespace std;
int main(){
    // Pair in c++
    // 
    // pair<int> pair = {1,2,3,4};
    // we can make a pairs of this
    pair<char, int> p1 = {'a', 10};
    // for first and second values print of pair
    // Pair ke andar pair 
    pair<int,pair<char,int>> p ={1, {'a',3}};
    cout<<p.second.first<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    // Also vectors of pairs
    vector<pair<int ,int >> vec = {{1,2,3},{1,2}};
}