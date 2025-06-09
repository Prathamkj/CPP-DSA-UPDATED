// MAP 
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    // key is string and value is int
    // m[key]=value;
    // This syntax
    // to insert value and change value
    m["tv"] = 100;
    m["laptop"] = 30;
    m["Apple"] = 1000;
    // Add -> emplace
    m.emplace("camera" ,133);
    m.emplace("mobile_phone",100000);
    // erase kar dega
    m.erase("tv");
    // to insert into the map
    m.insert({{"Samsung",1999}, {"One Plus",333}});
    // loop for data printing
    // pair data hai isliye auto use kiya
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // CHECKING COUNT FOR THE LAPTOP
    // count function
    cout <<"Count = "<< m.count("laptop");
    // output me ye according to ascending order print honge
    
    
    return 0;
}