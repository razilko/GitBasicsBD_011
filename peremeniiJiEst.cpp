#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");
	int a = 1;
	int b = 2;
	cout << "Èçíà÷àëüíî:" << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Ïîñëå èçì:" << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;




}
