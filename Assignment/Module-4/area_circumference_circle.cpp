#include<iostream>
using namespace std;

class Circle{
	private:
		int r;
		
		public:
//			Variable declaration 
			float area;
			float circumference;
			float pi=3.14;
			
//			Member Function for radius input 
			void input()
			{
				cout<<"Enter radius : ";
				cin>>r;
			}
			
//		    Member Function for displaying the area and circumference
			void display()
			{
				area = pi*r*r;
				cout<<"The area of circle is :"<<area<<endl;
				circumference = 2*pi*r;
			    cout<<"The circumference of circle is :"<<circumference<<endl;

			}
};

int main()
{
//	Creating Object
	Circle c;
	c.input();
	c.display();
	return 0;
}
