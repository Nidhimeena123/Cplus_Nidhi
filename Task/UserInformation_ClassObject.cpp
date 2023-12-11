#include<iostream>
using namespace std;

class User
{
	public:
    char name[10],email[20],address[100];
    int age;
    
void input()
{	
	cout<<"Enter Your Name : ";
	cin>>name;
	fflush(stdin);
	cout<<"Enter Your Age : ";
	cin>>age;
	cout<<"Enter Your Email : ";
	cin>>email ;
	cout<<"Enter Your Address : ";
	cin>>address;
	}

void display()
{
	cout<<endl<<"YOUR INFORMATION"<<endl<<endl;
	cout<<"Your Name : " <<name<<endl;
	cout<<"Your Age : "<<age<<endl;
	cout<<"Your Email : "<<email<<endl;
	cout<<"Your Address : "<<address<<endl;
}
};

int main()
{
	User u1;
	u1.input();
	u1.display();
	
	return 0;
}
