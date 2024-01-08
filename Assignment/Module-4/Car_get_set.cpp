#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Member function to set values
    void setCarDetails(const string& c, const string& m, int y) {
        company = c;
        model = m;
        year = y;
    }

    // Member functions to get values
    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {

    Car myCar;

    // Set values using the member function
    myCar.setCarDetails("Toyota", "Camry", 2022);

    // Display values using the member functions
    cout << "Car Company: " << myCar.getCompany() << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;

    return 0;
}

