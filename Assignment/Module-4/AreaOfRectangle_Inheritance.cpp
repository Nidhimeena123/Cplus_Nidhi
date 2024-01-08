#include<iostream>
using namespace std;

// Base class  Rectangle
class Rectangle {
protected:
    float length;
    float width;

public:
    // Function for the input of rectangle
    void input() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
};

// Derived class Area 
class Area : public Rectangle {
	private:
		float area;
public:
	
    // to calculate the area of the rectangle
    void displayArea() {
	      area = length * width;
	      cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    // Creating an object of the Area class
    Area a1;
    
    a1.input();
    a1.displayArea();

    return 0;
}

