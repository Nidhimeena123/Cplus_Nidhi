#include<iostream>
#include<string.h>   
using namespace std;  
  
class String  
{  
    char str[20];  
public:  
    void input() //member function  
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    //member function for output 
    void display()  
    {  
        cout<<"String: "<<str;  
    }
	//overloading  
    String operator+(String s)    
    {  
        String obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
};  
int main()  
{  
    //creating three object 
    String str1,str2,str3;  
    str1.input();  
    str2.input();  
    str3=str1+str2;  
    str3.display(); //displaying 
} 
