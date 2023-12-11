#include<iostream>
using namespace std;

int main()
{
	int num;
	int i;
	int even=0,odd=0,sum1=0,sum2=0;
	
	cout<<"Enter Numbers : ";
	
	for(i=0;i<=5;i++)
	{
		cin>>num;

	   if(num % 2 == 0)
	   {
	   	     even++;
	   	     sum1+=num;
	   }
	   else
	   {
	   	    odd++;
	   	    sum2+=num;
	   }
    }
	   
	cout<<endl<<"Total Even Numbers = "<<even<<endl;
	cout<<"Total Odd Numbers = "<<odd<<endl;
	cout<<"Sum of Even Numbers = "<<sum1<<endl;
	cout<<"Sum of Odd Numbers = "<<sum2<<endl;
	return 0;
}
