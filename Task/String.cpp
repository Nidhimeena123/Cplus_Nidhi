#include<iostream>
using namespace std;

int main()
{
	char str[100],ch;
	bool status=true;
	int i;
	int count=0;
    while(status)
    {
    	cout<<"Enter Your Name :";
    	cin>>str;
    	
    	for(i=0;str[i]!='\0';i++)
    	{
    		count++;
		}
		cout<<count;
		
	    
		fflush(stdin);
		cout<<endl<<"Do You want to Continue or not ? ['y/n'] : ";
		cin>>ch;
		
		if(ch=='y')
		{
			status=true;
		}
		else
		{
			status=false;
		}
}
	return 0;
}
