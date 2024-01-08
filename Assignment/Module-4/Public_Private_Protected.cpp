#include<iostream>
using namespace std;


class A {
public:
	// Accessible from anywhere
    void publicMethod() {
    }
protected:
	// Accessible by derived class and its derived classes
    void protectedMethod() {
    }
private:
	// Accessible only by the Base class
    void privateMethod() {
    }
};

// Private Inheritance
class B : private A {
public:
    void BaseMember() {
        publicMethod();       // accessible
        protectedMethod();   // accessible
        // privateMethod();   // Not accessible
    }
};

// Protected Inheritance
class C : protected A {
public:
    void BaseMember() {
        publicMethod();       // accessible
        protectedMethod();   // accessible
        // privateMethod();   // Not accessible
    }
};

// Public Inheritance
class D : public A {
public:
    void BaseMember() {
        publicMethod();       // accessible
        protectedMethod();   // accessible
        // privateMethod();   // Not accessible
    }
};
