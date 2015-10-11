#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int k = 0;
	cin >> k;
	cin.ignore(1);
	string st;
	getline(cin, st);
	while (k--)
	{
		vector <pair<string, string> > vs;
		while (getline(cin, st))
		{
			if (st.size() == 0)
			{
				break;
			}
			pair <string, string> pp;
			pp.first = st;

			for (int h = 0; h < st.size(); h++)
			{
				if (st[h] != ' ')
				{
				}
				else
				{
					st.erase(st.begin() + h);
					h--;
				}
			}
			sort(st.begin(), st.end());
			pp.second = st;
			vs.push_back(pp);

		}
		for (int ii = 0; ii < vs.size(); ii++)
		{
			for (int jj = ii; jj < vs.size(); jj++)
			{
				if (ii != jj)
				{
					if (vs[ii].second == vs[jj].second)
					{

						cout << vs[ii].first << " = " << vs[jj].first << endl;
					}
				}
			}
		}
		if (k)
		{
			cout << endl;
		}

	}
	//system("pause");
	return 0;
}