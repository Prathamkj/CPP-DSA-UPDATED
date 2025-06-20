#include <iostream>
// OBJECT ORIENTED PROGRAMMING
using namespace std;
#include <string>
// Class
class Teacher{
private: 
    double salary;
public:
    string name;
    string dept;
    string subject;
    void changeDepartment(string newDept){
        dept = newDept;
    }
    // Constructor - no written type
    // jab object create hoti hai tab constructor call hota hai
    // and always constructor runs
    Teacher(){
        cout<<"Hi i am Constructor"<<endl;
    }
    // paramaterized constructor
    Teacher(string n, string d, string s){
        this->name = name;
        // this is a special pointer that points to the cuurrennt object 
        // to specify the paramater wht it is 
        // object ka name hai
        // isse syntactialy correct hai
        dept = d;
        subject = s;
    }
};

int main(){
    Teacher t1;  // ye automaticaly constructor ko call ja rhi hai
    Teacher t2;
    t1.name = "Rahul";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    // FOR PARAMATERIZED CONSTRUCTOR 
    // OBJECT CRREATION
    Teacher t3("Rahul", "Computer Science", "C++");
    return 0;
}