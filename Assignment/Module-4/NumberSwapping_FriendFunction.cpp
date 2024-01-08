//Swapping of number without using third variable
#include<iostream>
using namespace std;

class NumSwap {
  private:
    int a, b;
  public:
    // get the data from the user
    void getData() {
      cout << "Enter Two Numbers: ";
      cin >> a >> b;
    }
  // print the number on the screen
  void display() {
    cout << "a = " << a << " b = " << b << endl;
  }
   // friend function
  friend void swap_number(NumSwap & s);
};

// swap the number
void swap_number(NumSwap & s) {
  /* accessing private members from the friend function */
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}

int main() {

  // creating object of class
  NumSwap s;

  s.getData();
  cout << "Before swapping" << endl;
  s.display();

  swap_number(s);
  cout << "After swapping" << endl;
  s.display();
  return 0;
}

