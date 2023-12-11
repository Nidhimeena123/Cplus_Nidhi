#include<iostream>
using namespace std;

int main()
{
	char str[100];
	int i,length=0,space=0,digit=0;
	cout<<"Enter a string : ";
	gets(cin, str);

// for counting characters in the string	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		length++;
	}
	
// for counting space in the string
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		space++;
	}
	
// for counting digits in the string
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		digit++;
	}
	
	cout<<"Characters : "<<length<<endl;
	cout<<"Spaces : "<<space<<endl;
	cout<<"Digits : "<<digit;

	return 0;
}
