#include<iostream>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		int n, tmp = 0, tmp2, c = 0;
		cin >> n;
		int ccc = 0;
		bool *s = new bool[2 * n];
		bool *s2 = new bool[2 * n];
		for (int i = 0; i < n; i++)
		{
			tmp2 = tmp;
			cin >> tmp;
			for ( c; c <tmp+i; c++)
			{
				s[c] = false;
				s2[c] = false;
			}
			
			s[c] = 1;
			ccc++;
			c++;
		}

		for (int j = 0; j < 2 * n; j++)
		{
			if (s[j])
			{
				int ted = 0;
				int cnt = j - 1;
				while (cnt>=0)
				{
					if (s[cnt] == 0)
					{
						ted++;
						if (s2[cnt] == 0)
						{
							if (j<(2*n)-1)
						{
						
							cout << ted<<" ";
							s2[cnt] = 1;
							break;
						}
							if (j==(2*n)-1)
							{
								cout << ted;
								s2[cnt] = 1;
								break;
							}
						}
					}
					cnt--;
				}
			}
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}