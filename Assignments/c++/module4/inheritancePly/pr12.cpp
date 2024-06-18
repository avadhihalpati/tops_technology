// Write a program to swap the two numbers using friend
// functionwithout using third variable

#include<iostream>
using namespace std;

class StudyFame {
  private:
    int a, b;
  public:
  
    void getData() {
      cout << "Enter Two Numbers: ";
      cin >> a >> b;
    }

  void display() {
    cout << "a = " << a << " b = " << b << endl;
  }
  
  friend void swap_number(StudyFame & s);
};

void swap_number(StudyFame & s) {
  int temp;
  
  temp = s.a;
  s.a = s.b;
  s.b = temp;
}

int main() {

  StudyFame s;
    s.getData();
  s.display();
  swap_number(s);
  cout << "After swapping" << endl;
  s.display();
  return 0;
}