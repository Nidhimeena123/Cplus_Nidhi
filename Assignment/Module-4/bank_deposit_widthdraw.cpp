#include<iostream>
#include<string.h>

using namespace std;

class bank
{
	private:
        int acno;
        float bal;  
   public:
        bank(int acc_no, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   //depositing an amount
{
        int damt1;
        cout<<endl<<" Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void bank::withdraw()  //withdrawing an amount
{
        int wamt1;
        cout<<endl<<"Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
          cout<<endl<<" Cannot Withdraw Amount";
        bal-=wamt1;
}
void bank::display()  //displaying the details
{
        cout<<endl<<" ----------------------";
        cout<<endl<<" Accout No. : "<<acno;
        cout<<endl<<" Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<endl<<" Enter Details: \n";
        cout<<"-----------------------";
        cout<<endl<<" Accout No. ";
        cin>>acc_no;
        cout<<endl<<" Balance : ";
        cin>>balance;
  
        bank b1(acc_no, balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}
