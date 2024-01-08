#include<iostream>
using namespace std;

// Base class: Person
class Person{
	protected:
		char name[30];
		int age;
		
		public:
			// Function to initialize data
			void inputPerson(){
			cout<<"Enter Name :";
			cin>>name;
			cout<<"Enter Age :";
			cin>>age;
	    	}
	    	
	    	// Function to display data
	    	void displayPersonData(){
	    		cout<<endl<<"Name :"<<name<<endl;
	    		cout<<"Age :"<<age<<endl;
			}
	    	
};

// Derived class: Student
class Student : public Person{
	protected:
		float percentage;
		
		public:
			// Function to read student data
			void inputStudent(){
				cout<<endl<<"Enter Percentage :";
				cin>>percentage;
			}
			
			// Function to display student data
			void displayStudentData(){
				cout<<endl<<"Percentage :"<<percentage<<endl;
			}
};

// Derived class: Teacher
class Teacher : public Person{
	protected:
		int salary;
		
		public:
		// Function to read teacher data
		void inputTeacher(){
			cout<<endl<<"Enter Salary :";
			cin>>salary;
		}
		
		 // Function to display teacher data
		void displayTeacherData(){
			cout<<endl<<"Salary :"<<salary<<endl;
		}
};

int main()
{
	// Creating objects of Student and Teacher classes
	Student s1;
	Teacher t1;
	
	s1.inputPerson();
	cout<<endl<<"=====Person Details=====";
	s1.displayPersonData();
	
	s1.inputStudent();
	cout<<endl<<"=====Student Percentage=====";
	s1.displayStudentData();
	
    t1.inputTeacher();
    cout<<endl<<"=====Teacher Salary=====";
    t1.displayTeacherData();
	
	
	return 0;
}
