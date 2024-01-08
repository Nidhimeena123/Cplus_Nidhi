#include<iostream>
using namespace std;

// constant value of pi
const float pi=3.14;
// Function declarations
float area(float n,float b,float h)
{
float ar;
ar=n*b*h;
return ar;
}
float area(float r)
{
float ar;
ar=pi*r*r;
return ar;
}
float area(float l,float b)
{
float ar;
ar=l*b;
return ar;
}


int main()
{
	
float b,h,r,l;
float result;

// Function definitions
cout<<endl<<"Enter the Base & Hieght of Triangle: "<<endl;
cin>>b>>h;
result=area(0.5,b,h);
cout<<"Area of Triangle: "<<result<<endl;

cout<<endl<<"Enter the Radius of Circle: "<<endl;
cin>>r;
result=area(r);
cout<<endl<<"Area of Circle: "<<result<<endl;

cout<<endl<<"Enter the Length & Bredth of Rectangle: "<<endl;
cin>>l>>b;
result=area(l,b);
cout<<endl<<"Area of Rectangle: "<<result<<endl;
return 0;
}
