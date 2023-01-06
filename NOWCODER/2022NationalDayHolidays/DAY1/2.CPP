#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	int n0 = 0, n1 = 0;
	int fir=-1, sec=0;
	cin >> N;
	char arry[100001];
	getchar();
	scanf("%s", &arry);
	int ci=0;
	while (ci<N)
	{
		if (arry[ci]=='0')
			n0++;
		else
			n1++;
		ci++;
	}
	if (n0 == n1)
	{
		fir = N;
		goto tag;
	}
	{
		for (int i = N - 1; i >= 0; i--)
		{
			for (int x = 0; x < N - i; x++)
			{
				int nn0 = 0, nn1 = 0;
				int cci=x;
				while (cci<i)
				{
					if (arry[ci]=='0')
						nn0++;
					else
						nn1++;
					cci++;
				}
				if(nn0==nn1)
				{
					if(nn0+nn1>fir)
					fir=nn0+nn1;
				}
			}
		}
	}
tag:
	if (n1 > n0)
		sec = n0 * 2;
	else
		sec = n1 * 2;
	cout << fir << " " << sec;
	return 0;
}
