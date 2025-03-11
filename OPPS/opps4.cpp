// Inheritance in opps
#include <iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    // constructor
    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person(){

    }
};
// inherit of class Person to class Student
// Student class is derived class
// Student class is child class
// semicolon is important
class Student : public Person{
public:
    int rollno;
    // to isme roll no extra hai toh woh bhi print ho jayega
    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }

    // for the paramaterized constructor
    Student (string name, int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }
};

int main(){
    Student p1;
    p1.name = "Pratham";
    p1.age = 21;
    p1.rollno = 39;
    p1.getinfo();
    return 0;
}