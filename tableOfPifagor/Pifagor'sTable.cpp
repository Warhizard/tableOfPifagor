#include <iostream>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "");


	for (int i = 0; i <= 10; i++)
			cout << i << '\t';
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << '\t';
		for (int j = 1; j <= 10; j++)
			cout << i * j << '\t';
		cout << endl;
	}

}