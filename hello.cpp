#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
	
//i'm cooked
  MyClass a(5);
  cout << a.getX() << endl;
}
