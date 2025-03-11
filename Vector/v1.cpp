#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> vector = {1,4,5,7,4,54,6};
    // size of vector 
    cout<<vector.size()<<endl;
    // Push => isse end me 44 jud jayega
    vector.push_back(44);
    // pop back => isse end wala element remove ho jayega
    vector.pop_back();
    // for each for print of vector

    for(int i: vector){
        cout<<vector[i]<<endl;
    }
    vector.pop_back();
    // front -- last ka element deletee kardiye
    vector.front();
    // and Back
    vector.back();
    // back - last value
    vector.at(3);
    // vec.at(3) - 3rd index ki value aa jayege




    // for 0(n) - time coplexity
    // erase function
    vector.erase(vector.begin());
    // erase kardiya 0 index ki value
    vector.erase(vector.begin() + 2);
    // index 2 erased

    // to erase range of number
    vector.erase(vector.begin()+1,vector.begin()+3);


    // Insert function
    vector.insert(vector.begin(), 10);
    // 0 index me 10 dal diya
    return 0;
}