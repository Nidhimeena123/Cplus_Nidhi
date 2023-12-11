#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter num1 : ";
	cin>>num1;
	cout<<"Enter num2 : ";
	cin>>num2;
	cout<<endl<<"Before Swapping Num1: "<<num1<<endl;
	cout<<"Before Swapping Num2: "<<num2<<endl;
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	cout<<endl<<"After Swapping Num1: "<<num1<<endl;
	cout<<"After Swapping Num2: "<<num2;
	
	return 0;
}
