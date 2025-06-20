#include <iostream>
using namespace std;
// This pointer points to the current object
class Student{
public:
    string name;
    int age;
    string course;
    Student(string name, int age, string course){
        // constructor
        // this pointer
        // points all the paramaters by this pointer so naming will go uneffectively
        this->name = name;
        this->age = age;
        this->course = course;
    }
    // copy constructor
    // here we will pass our data with the refrence
    Student(Student &s){
        cout<<"I am custom copy constructor"<<endl;
        // isko hum pass by refrence karenge
        // means yaha par copy nhi ek original address hi hai
        // so jo bhi changes honge woh yaha bhi honge
        this->name = s.name;
        this->age = s.age;
        this->course = s.course;
    }
    // destructor
    // special member function that is automatically invoked when an object is destroyed or goes out of scope
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<course<<endl;
    }

};
int main(){
    Student s1("Pratham", 21, "C++");
    cout<<s1.name<<endl;
    Student s2(s1); // default copy constructor - invokedd
    cout<<s2.name<<endl;
    s2.getinfo(); // sari values ka print is function me hai
}