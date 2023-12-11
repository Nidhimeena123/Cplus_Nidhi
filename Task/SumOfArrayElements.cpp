#include<iostream>
using namespace std;

int main(){
	
	int sum,arr[10];
	int i;
	cout<<"Enter numbers : ";
	
//	 Taking array elements from user
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}

	for(i=0;i<10;i++)
	{
			sum+=arr[i];
	}
  	cout<<sum;
  
	return 0;
}
