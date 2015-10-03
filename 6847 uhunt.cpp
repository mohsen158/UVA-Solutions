#include <iostream>
#include <map>

using namespace std;

typedef unsigned long long ull;


int main() {

	ull a;
	ull b;
	while (cin >> a >> b)
	{
		if (a==0&&b==0)
		{
			return 0;

		}
		a = a / 5;
		b = b / 5;
		cout << b - a +1<< endl;
	}
	return 0;

}
