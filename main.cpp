#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int a, b, res=0; // announce variables

	cout << "������� �����:";
	cin >> a; // setting variables

	cout << "������� �������:";
	cin >> b; // setting variables

	res = a;
	while (b != 0) // degree
	{
		res *= a;
		b--;
	}
	if (b == 0) // print
	{
		cout << res/a;
	}
}