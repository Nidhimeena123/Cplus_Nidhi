#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char ch='A';
	for(i=0;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<(char)(ch+j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
