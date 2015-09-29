#include <iostream>
using namespace std;
int main()
{
	int n, b, h, w;
	while (cin>>n>>b>>h>>w)
	{
		int price = b+1;
		for (int i = 0; i < h; i++)
		{
			int budget;
			cin >> budget;
			bool respa = false;
			for (int j = 0; j < w; j++)
			{
				int ag;
				cin >> ag;
				if (ag>n)
				{
					respa = true;
				}

			}
			if (respa)
			{

				if ((n*budget) < b)
				{
					if ((n*budget) < price)
					{
						price = n*budget;
					}
				}
			}
		}
		if (price == b+1)
		{
			cout << "stay home"<<endl;
		}
		else
		cout << price << endl;

	}
	return 0;
}