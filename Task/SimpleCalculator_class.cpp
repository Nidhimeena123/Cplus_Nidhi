//simple calculator using class
#include<iostream>
using namespace std;

class calculator{
	public:
		int num1,num2,sum,sub,mul,div,mod;
		
		void input()
		{
			cout<<"Enter num1 and num2 : ";
			cin>>num1>>num2;
		}
		
		void display()
		{
			sum = num1 + num2;
			cout<<"The sum of two number is :"<<sum<<endl;
			sub = num1 - num2;
			cout<<"The sub of two number is :"<<sub<<endl;
			mul = num1 * num2;
			cout<<"The mul of two number is :"<<mul<<endl;
			div = num1 / num2;
			cout<<"The div of two number is :"<<div<<endl;
			mod = num1 % num2;
			cout<<"The mod of two number is :"<<mod<<endl;
		}
};

int main()
{
	calculator c1;
	c1.input();
	c1.display();
	
	return 0;
}
