#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:

// Member function to get number from user
   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }
   
   friend void Max(Test);
};

//Checking the number for larger value
void Max(Test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {

// Creating object
   Test t;
   t.input();
   Max(t);

   return 0;
}
