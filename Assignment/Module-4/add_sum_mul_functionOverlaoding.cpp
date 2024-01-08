#include <iostream>
using namespace std;

void operation(int A, int B, int C);
void operation(int A, int B, int C, int D);
void operation(int A, int B, int C, int D, int E);
void operation(int A, int B);

int main()
{
    operation(1,2,3);
    operation(1,2,3,4);
    operation(1,2,3,4,5);
    operation(12,30);
    
    return 0;
}

void operation(int A, int B, int C)
{
     cout<< endl << "SUB is : "<< A-B-C;  
}

void operation(int A, int B, int C, int D)
{
     cout<< endl << "MUL is : "<< A*B*C*D;     
}
void operation(int A, int B, int C, int D, int E)
{
     cout<< endl << "ADD is : "<< A+B+C+D+E;     
}
void operation(int A, int B)
{
     cout<< endl << "Div is : "<< A/B;     
}
