#include<iostream>
using namespace std;

class A{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};

class B:public A{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};

class C:public A{
	public:
		void displayC()
		{
			cout<<"Class C";
		}
};

int main()
{
	B b1;
	b1.displayA();
	b1.displayB();
	
	C c1;
	c1.displayA();
	c1.displayC();
	
	return 0;
}
