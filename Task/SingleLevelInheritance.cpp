#include<iostream>
using namespace std;

class Parent{
	
	public:
		void displayP()
		{
		cout<<"This a parent class "<<endl;
	}
};

class Child : public Parent{
	
	public:
		void displayC()
		{
		cout<<"This a Child class ";
	}
};

int main()
{
	Child c1;
	c1.displayP();
	c1.displayC();
	return 0;
}
