#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
        void input();
        void display();
        void operator +(Matrix x);
};
void Matrix::input()
{
        cout<<endl<<" Enter Matrix Element : "<<endl;
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<endl;
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<endl<<" Addition of Matrix : "<<endl<<endl;
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<endl;
        }
}
int main()
{
        Matrix m,n;
        m.input();       
        n.input();     
        cout<<"\n First Matrix : \n\n";
        m.display();   // Displaying First Matrix
        cout<<"\n Second Matrix : \n\n";
        n.display(); // Displaying Second Matrix
        m+n;        // Addition of Two Matrices. Overloaded '+' Operator
        return 0;
}
