#include<iostream>
using namespace std;

class Person{
	private:
		char name[100];
		int age;
		char country[100];
		
		public:
			
			void set()
			{
				cout<<"Enter name :";
				cin>>name;
				cout<<"Enter age :";
				cin>>age;
				cout<<"Enter country :";
				cin>>country;	
			}
			
			void get()
			{
				cout<<endl<<"========PERSON INFORMATION=========="<<endl;
				cout<<"Name :"<<name<<endl;
				cout<<"Age :"<<age<<endl;
				cout<<"Country :"<<country<<endl;
			}
};

int main()
{
	Person p;
	p.set();
	p.get();
	return 0;
}
