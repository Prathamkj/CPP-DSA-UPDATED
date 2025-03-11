#include <iostream>
using namespace std;
// Function Overriding
// Base class
class Base {
public:
    // Virtual function to be overridden in derived class
    virtual void show() {
        cout << "Base class show function called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the base class function
    void show() override {
        cout << "Derived class show function called" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    // Pointing base class pointer to derived class object
    basePtr = &derivedObj;

    // Calling the overridden function
    basePtr->show(); // This will call the derived class show function

    return 0;
}