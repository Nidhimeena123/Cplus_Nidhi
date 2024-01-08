#include<iostream>
using namespace std;

inline int multiply(int a, int b)
{
	return a * b;
}

inline int cube(int x)
{
	return x * x * x;
}

int main()
{
	int num1, num2;
	
	cout<<"Enter the value of num1 : ";
	cin>>num1;
	cout<<"Enter the value of num2 : ";
	cin>>num2;
	
	cout<<endl<<"Multiplication of "<< num1 <<" and "<< num2 <<" : "<< multiply(num1,num2)<<endl;
	cout << "Cubic value of " << num1 << " : " << cube(num1) << endl;
	cout<<"Cubic value of " << num2 << " : "<< cube(num2)<<endl;
	return 0;
}
