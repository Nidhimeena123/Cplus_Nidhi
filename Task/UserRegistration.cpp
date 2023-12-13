#include<iostream>
using namespace std;

//Creating class for popular destination
class Destination{
	
	public:
		void display()
		{
			cout<<"=============================Popular Destinations==============================="<<endl;
			cout<<endl<<"1. Ahmedabad"<<endl<<"2. Udaipur"<<endl<<"3. Manali"<<endl<<"4. Goa"
			<<endl<<"5. Jaipur"<<endl<<"6. Rishikesh"<<endl<<"7. Varanashi"<<endl<<
			"8. Nanital"<<endl<<"9. Ooty"<<endl<<"10. Kerela"<<endl;	
		}	
};


//Class for registration
class Registration{
	
	public:
		
		char choice;
		char name,email;
		int pass,cpass;
		
		 void input()
		{
				cout<<endl<<"Do you want to Signup in our App [y/n] : ";
				cin>>choice;
				if(choice == 'n')
				{
					cout<<endl<<"Thank You"<<endl;
			    }
				else
				{
	               do
	                {
	                	cout<<endl<<"==========================User Registration======================="<<endl;
		                cout<<endl<<"Enter Your Name : "<<endl;
		                cin>>name;
		                fflush(stdin);
		                cout<<"Enter Your Email : "<<endl;
	                 	cin>>email;
	                	fflush(stdin);
	                	cout<<"Enter Password : "<<endl;
	                	cin>>pass;
	                 	cout<<"Enter Confirm Password : "<<endl;
		                cin>>cpass;
	                }while(pass != cpass);
	             }
	        }
	   };

//Class for Login
class Login{
	
	public:
		
		void getter()
		{
		cout<<endl<<"====================User Login===================="<<endl;
		cout<<endl<<"Welcome"<<endl;
	    }
};



int main()
{
	Destination d1;
	d1.display();

	Registration r1;
	r1.input();
	
	Login l1;
	l1.getter();
	return 0;
}
