#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
	L1.insert(10, 1);
	L1.insert(20, 2);
	L1.insert(30, 3);
	L1.insert(40, 4);
	L1.insert(50, 5);
	L1.display();
	L1.size();
	L1.remove(2);
	L1.remove(4);
	L1.display();
	L1.~List();
	
	L2.insert(100, 1);
	L2.insert(200, 2);
	L2.insert(300, 3);
	L2.display();
	L2.size();
	L2.display();
	
}
