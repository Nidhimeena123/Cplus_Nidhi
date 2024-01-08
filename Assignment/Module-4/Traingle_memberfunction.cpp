#include <iostream>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(int s1, int s2, int s3)  {
	      side1 = s1;
	      side2 = s2;
	      side3 = s3;
	}

    // Member function to check if the triangle is equilateral
    int Equilateral()
	 {
        return (side1==side2) && (side2==side3);
    }

    // Member function to check if the triangle is isosceles
    int Isosceles()
	{
        return (side1==side2) || (side1==side3) || (side2==side3);
    }

    // Member function to check if the triangle is scalene
    int Scalene()
	{
        return (side1!=side2) && (side1!=side3) && (side2!=side3);
    }
};

int main() {
	
    int s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    // Create a Triangle object
    Triangle t(s1, s2, s3);

    // Determine and display the type of the triangle
    if (t.Equilateral()) {
        cout << "The triangle is equilateral." <<endl;
    } else if (t.Isosceles()) {
        cout << "The triangle is isosceles." <<endl;
    } else if (t.Scalene()) {
        cout << "The triangle is scalene." <<endl;
    } else {
        cout << "Invalid triangle." <<endl;
    }

    return 0;
}

