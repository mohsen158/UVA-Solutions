#include <iostream>
using namespace std;
int main()
{
	int pl;
	cin >> pl;
	for (int i = 0; i < pl;i++)
	{
		int k;
		cin >> k;
		int jj = 0;
		for (int j = 0; j < k;j++)
		{
			int er;
			cin >> er;
			if (er>jj)
			{
				jj = er;
			}
		}
		cout << "Case " << i +1<< ": " << jj<<endl;
	}
	return 0;
}