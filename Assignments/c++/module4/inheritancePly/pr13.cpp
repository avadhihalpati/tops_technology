// Write a program to find the max number from given two
// numbersusing friend function

#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }
 
   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}