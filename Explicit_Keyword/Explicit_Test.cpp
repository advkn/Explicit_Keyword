/*	explicit:
	
	1. A constructor that takes a sungle argument operates as an implicit conversion operator
	   by default.  Referred to as a "converting constructor".
	
	2. To prevent implicit conversion, the "explicit" keyword is used.  This makes the constructor non-converting.

	3. This keyword has effect only when defined on a single argument constructor
	   or on a constructor which has default arguments for all parameters except one.
*/

#include <iostream>
using namespace std;

class MyClass {
	int data;
public:
	
	explicit MyClass(int aData) {
		cout << "Constructor invoked." << endl;
		data = aData;
	}

	void print() {
		cout << data << endl;
	}
};

int main() {

	MyClass obj1(100);

	//MyClass obj2 = 200;		//generates a compiler error

	obj1.print();

	getchar();

};