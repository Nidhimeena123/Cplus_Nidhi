#include<iostream>
using namespace std;

class A{
	public:
		void displayA(){
			cout<<"Class A"<<endl;
		}
};

class B:public A{       // Single level Inheritance
	public:
		void displayB(){
			cout<<"Class B"<<endl;
		}
};

class C{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};

class D:public A,public C{     // Multiple Inheritance
	public:
		void displayD(){
			cout<<"Class D";
		}
};



int main()
{
	B b1;
	b1.displayA();
	b1.displayB();
	
	D d1;
	d1.displayA();
	d1.displayC();
	d1.displayD();
	
	return 0;
}
