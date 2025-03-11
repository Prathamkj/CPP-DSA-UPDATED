#include <iostream>
// OBJECT ORIENTED PROGRAMMING
using namespace std;
#include <string>
// Class
class Teacher{
// if we want to create particular private 
private: 
    double salary;
public:
// Agar yaha par private hota tha toh hum ise accesss nhi kar pate the
    // properties of class / Arrributes of class
    string name;
    string dept;
    string subject;

    // Methods / Members function
    // Function Written inside the class called as methods of class
    void changeDepartment(string newDept){
        // old value ke andar new value add kardi
        dept = newDept;
    }

    // setter function - ye private value ko set karta hai
    void setSalary(int s){
        salary = s;
    }
    // from this we can access the salary also
    // getter function
    // Private value ki value set karne ke liye use karte hai
    double getSalary(){
        return salary;
    }

};
// end me semocolon
class Student{
public:
    string name;
    string dept;
};

int main(){
    // Creating Objects
    Teacher t1;
    Teacher t2;
    // Now har ek individual ke paas apni properties hai
    // Accesing
    t1.name = "Rahul";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(75000);
    // we need Access Modifiers to print these data
    cout << t1.name << endl;
    cout<< t1.getSalary() << endl;
    return 0;
}