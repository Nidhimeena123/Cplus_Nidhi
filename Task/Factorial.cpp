//factorial using loop

#include<iostream>
using namespace std;

int main()
{
	int i;
	int f=1,n;
	cout<<"Enter a number : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"The factorial of number is :"<<f;
	 return 0;
}
