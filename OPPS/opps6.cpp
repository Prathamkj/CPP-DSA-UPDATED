#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Default constructor
    // non paramaterized constructor
    Example() {
        value = 0;
        cout << "Default constructor called, value = " << value << endl;
    }

    // Parameterized constructor
    Example(int val) {
        value = val;
        cout << "Parameterized constructor called, value = " << value << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj1;          // Calls default constructor
    Example obj2(100);     // Calls parameterized constructor

    obj1.display();
    obj2.display();

    return 0;
}