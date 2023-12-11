#include<iostream>
using namespace std;

int main()
{
	int phy,chem,math,bio,eng;
	int total;
	
	cout<<"Enter Marks :"<<endl<<endl;
	
	cout<<"Physics : ";
	cin>>phy;
	cout<<"Chemistry : ";
	cin>>chem;
    cout<<"Maths : ";
	cin>>math;
	cout<<"Biology : ";
	cin>>bio;
	cout<<"English : ";
	cin>>eng;
	
//	Total Marks
	total = (phy+chem+math+bio+eng);
	cout<<endl<<"Total Marks = "<<total;
	
//	Percentage
    float per = total/5;
    cout<<endl<<"Percentage = "<<per<<"%"<<endl;
    
//    Grading using if else
     if(per>90)
     {
     	cout<<"A+";
	 }
	 else if(per>80)
	 {
	 	cout<<"A";
	 }
	 else if(per>60)
	 {
	 	cout<<"B";
	 }
	 else if(per>40)
	 {
	 	cout<<"C";
	 }
	 else
	 {
	 	cout<<"Fail";
	 }
	
	return 0;
}
