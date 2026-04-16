#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char *argv[])
{
	int arr[BUFLEN];
	int *p;
	char *q
	short *r;
	int a, i;

	for (i = 0; i < BUFLEN; i++)
		arr[i] = 10 - i;
	
	a  = 5;
	p = &a;

	cout << "a = " << a << endl;
	cout << "p = " << p << endl;
	cout << "&a = " << &a << endl;
	cout << "*p = " << *p << endl;
	cout << "arr = " << arr << endl;

	cout << "sizeof(p): " << sizeof(p) << endl;
	cout << "sizeof(q): " << sizeof(q) << endl;
	cout << "sizeof(r): " << sizeof(r) << endl;
	
	return 0;
}
