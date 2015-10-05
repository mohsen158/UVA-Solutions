#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int k = 0;
	cin >> k;
	cin.ignore(1);
	int whats = 0;
	for (int i = 0; i < k; i++)
	{
		string st;
		getline(cin,st);
		for (int h = 0; h < st.size(); h++)
		{
			if (st[h]<='z'&&st[h]>='a')
			{
			}
			else
			{
				st.erase(st.begin() + h);
				h--;
			}
		}
		float ad = sqrt(st.size());
		int gh = ad;
		float ar = gh;
		if (ar != ad)
		{
			cout << "Case #" << i +1<< ":" << endl << "No magic :(" << endl;
			continue;
		}
		int ttt = st.size() / 2;
		for (int u = 0; u < ttt; u++)
		{
			if (st[u] != st[st.size() - u - 1])
			{
				cout << "Case #" << i +1<< ":" << endl << "No magic :(" << endl;
				whats = 1;
				break;
			}
		}
		if (whats==0)
		{
		
		cout << "Case #" << i+1 << ":" << endl;
		cout << sqrt(st.size())<<endl;
	}
		whats = 0;
	}
	system("pause");
	return 0;
}