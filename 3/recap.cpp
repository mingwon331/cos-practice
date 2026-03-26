#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
	cin >> y;

	if (x < y)
	{
		for (int i = x; i <= y; i++)
		{
			sum += i;
		}
		cout << "Sum between " << x << " and " << y << " is " << sum << endl;
	}
	else
	{
		cout << "The first number must be smaller than the second." << endl;
	}
	return 0;
}
