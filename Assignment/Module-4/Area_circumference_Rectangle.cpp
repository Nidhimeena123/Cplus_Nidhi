#include<iostream>
using namespace std;

class Rectangle{
	private:
		int l,w;
		
		public:
//			Variable declaration 
			int area;
			int perimeter;
			
//			Member Function
			void input()
			{
				cout<<"Enter length : ";
				cin>>l;
				cout<<"Enter Width :";
				cin>>w;
			}
			
//			Member Function for displaying the area and perimeter
			void display()
			{
				area = w*l;
				cout<<"The area of circle is :"<<area<<endl;
				perimeter = 2*(l+w);
			    cout<<"The perimeter of circle is :"<<perimeter<<endl;

			}
};

int main()
{
//	Creating object
	Rectangle r;
	r.input();
	r.display();
	return 0;
}
