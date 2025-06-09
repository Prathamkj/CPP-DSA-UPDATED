// VECTOR ITTERATOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
// vector.begin();
// 0th index value
// vector.end();
// last position ka next value
vector<int> vec = {1,2,3,4,5};
//  vector iterator
vector<int>::iterator it;
vector<int>::iterator iter;
// it naam ka iterator banaya
// Forward loop
for(it = vec.begin(); it!=vec.end(); it++){
    cout<<*(it)<<endl;
}
// Another Example of vector iterator
for(auto iter = vec.begin(); iter!=vec.end(); iter++){
    cout<<*(iter)<<endl;
}   
cout<<endl;
// Backward Loop
// Reverse itterator
for(auto iy = vec.rbegin(); iy!=vec.rend(); iy++){
    cout<<*(iy)<<endl;
}
for(auto iter = vec.begin(); iter!=vec.end(); iter++){
    cout<<iter<<"iterator"
}
// so we can use auto keyword instead of vector<int>::iterator line
// for( auto it = vec.begin(); it!=vec.end(); it){
//     cout<<*(it)<<endl;
// }
return 0;

}