#include<iostream>
#include<map>
#include <unordered_map>
using namespace std;
// we have 2 types of map multi-map and unordered map
int main(){
    // 1st - Multimap
    // here we cannot place square bracket
    multimap<string,int> m;
    m.emplace("tv",100);
    m.emplace("tv",100);
    // so here 2 baar print ho jayega
    for (auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //  IMP
    // UNORDERED MAP
    // Here ye data ko unordered rakhta hai...
    unordered_map<string,int> m1;
    m1.emplace("ee",22);
    m1.emplace("sds",33);
    // Random data arrange karke dega ye
    return 0;
}