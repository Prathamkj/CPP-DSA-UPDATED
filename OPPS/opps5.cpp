// Inheritance in opps
#include <iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
};
// Student is a child for Person
class Student : public Person{
public:
    int rollno;
};

// Now GradStudent is a child of Student
// so it's called Multilevel inheritance

// Multilevel Inheritance 
class GradSudent : public Student{
public:
    string researcharea;
};
// Multilevel Inheritance 


// Multple Inheritance
class Teacher {
public:
    string dept;
    string subject;
};
// Here we passes the multiple classes
class TA : public Student, public Teacher{
    // ye dono class ke properties ko inherit kar rahi hai
public:
};
int main(){
    Student p1;
    p1.name = "Pratham";
    p1.age = 21;
    p1.rollno = 39;
    p1.researchArea = "Computer Science";
    cout<<p1.researchArea<<endl;
}