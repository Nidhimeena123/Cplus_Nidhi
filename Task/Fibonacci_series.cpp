//Fibonacci Series

#include<iostream>
using namespace std;

int main()
{
	int n,num1=0,num2=1,num3=0;
	int i;
	cout<<"Enter the number :";
	cin>>n;
	cout<<"Fibonacci Series : ";
	for (i=1;i<=n;i++) {
        cout<<num1<<", ";
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
	return 0;
}
