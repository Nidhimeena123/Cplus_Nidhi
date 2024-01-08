#include<iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass() : value(0) {}

    // Constructor with parameter
    MyClass(int val) : value(val) {}

    // Overload the addition operator
    void operator +(MyClass other) 
	{
        MyClass result;
        result.value = value + other.value;
    }

    // Display the value
    void display() 
	 {
        cout << value <<endl;
    }
};

int main() {
    // Create objects
    MyClass o1(5);
    MyClass o2(10);

    // Use the overloaded addition operator
    MyClass o3 = o1 + o2;

    // Display the results
    cout << "Object o1: ";
    o1.display();

    cout << "Object o2: ";
    o2.display();

    cout << "Result o3: ";
    o3.display();

    return 0;
}

