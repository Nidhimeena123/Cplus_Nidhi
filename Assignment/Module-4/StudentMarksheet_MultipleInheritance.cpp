#include<iostream>
using namespace std;

class Student {
protected:
    char name[30];
    int rollNumber;

public:
    // Function to initialize student data
    void StudentData() {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
    }

    // Function to display student data
    void displayStudentData() {
        cout<<endl<<"Student Details:"<<endl;
        cout<<"Name: " <<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};

// Base class: Marks
class Marks {
protected:
    float Math, Science, English;

public:
    // initialize marks data
    void MarksData() {
        cout << "Enter marks in Math: ";
        cin >> Math;
        cout << "Enter marks in Science: ";
        cin >> Science;
        cout << "Enter marks in English: ";
        cin >> English;
    }

    // display marks data
    void displayMarksData() {
        cout <<endl<< "Marks Details:"<<endl;
        cout << "Math: "<<Math<<endl;
        cout << "Science: "<<Science <<endl;
        cout << "English: "<<English<<endl;
    }
};

// Derived class: MarkSheet 
class MarkSheet : public Student, public Marks {
public:
    // Function to initialize mark sheet data
    void MarkSheetData() {
        StudentData(); 
        MarksData(); 
    }

    // Function to calculate total marks
    float calculateTotalMarks() {
        return Math + Science + English;
    }

    // Function to calculate percentage
    float calculatePercentage() {
        return (calculateTotalMarks() / 3.0);
    }

    // Function to display mark sheet
    void displayMarkSheet() {
        displayStudentData(); 
        displayMarksData();   

        cout <<endl<<"Total Marks: " << calculateTotalMarks() <<endl;
        cout << "Percentage: " << calculatePercentage() << "%" <<endl;
    }
};

int main() {
    // Creating an object of the MarkSheet class
    MarkSheet ms;

    // Initializing and displaying mark sheet data
    cout << "Enter Student Mark Sheet Data:\n";
    ms.MarkSheetData();
    ms.displayMarkSheet();

    return 0;
}

