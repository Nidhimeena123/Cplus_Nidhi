#include<iostream>
using namespace std;

//creating function for circle, triangle and rectangle
void circle(){
	int r,area;
	float pi=3.14;
	cout<<endl<<"Enter pi : "<<pi<<endl;
    cout<<"Enter Radius : ";
	cin>>r;
	area=pi*r*r;
	cout<<"Area of Circle :  "<<area;
}
void triangle(){
	int l,w,area;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter width : ";
	cin>>w;
	area=l*w/2; //formula for finding area of triangle
	cout<<"Area of Triangle : "<<area;	
}
void rectangle(){
	int l,w,area;
	cout<<"Enter length : ";
	cin>>l;
	cout<<"Enter width : ";
	cin>>w;
	area=l*w;//formula for finding area of Rectangle
    cout<<"Area of Rectangle : "<<area;	
}
	
	
int main(){
	
//	Will print the Heading 
	cout<<"---------Area finder--------- "<<endl<<endl;
	
//	choices
    cout<<"1.Circle "<<endl<<endl;
    cout<<"2.Triangle "<<endl<<endl;
    cout<<"3.Rectangle "<<endl<<endl;
    
//    asking for user choice
    int choice;
	cout<<"Enter choice : ";
	cin>>choice;
	
	switch(choice){
		
//		case 1 for finding area of circle
		case 1:
	        circle();
	        break;
		
//		case 2 for finding area of Triangle
		case 2:
			triangle();
			break;

//		case 1 for finding area of Rectangle
		case 3:
		    rectangle();
		    break;
			
		default:
			{
				cout<<"something went wrong "<<endl;
			}
	}
	
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>>>Thank You "<<endl;
	return 0;
}
