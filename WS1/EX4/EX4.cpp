#include "gpcs1.h"
#include "gpcs2.h"
#include <iostream>

using namespace std;

int main()
{
	int pause;

	// Allocation sur la pile des 2 instances
	gpcs1 p1;
	gpcs2 p2;

	cout << "Service gpcs1s1" << endl;
	p1.gpcs1S1();
	cout << "\nService gpcs1s2" << endl;
	p1.gpcs1S2();
	cout << "\nService gpcs2s1" << endl;
	p2.gpcs2S1();
	cin >> pause;

	return 0;
}