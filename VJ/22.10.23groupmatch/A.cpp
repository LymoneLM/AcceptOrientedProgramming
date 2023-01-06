#include <bits/stdc++.h>
using namespace std;
int main()
{
	// freopen("adjustment.in", "r", stdin);
	// freopen("adjustment.out", "w", stdout);
	int N, Q, Num, Sum, Sum_C = 0, Sum_R = 0, t_C = 0, t_R = 0;
	bool R[1000010] = {}, C[1000010] = {};
	char x;
	cin >> N >> Q;
	for (int i = 1; i <= Q; i++)
	{
		cin >> x >> Num;
		Sum = (N + 1) * N / 2;
		if (x == 'R')
		{
			if (R[Num] == false)
			{
				Sum_R += Num;
				t_R++;
				Sum += N * Num - Sum_C - Num * t_C;
				R[Num] = true;
				cout << Sum << endl;
			}
			else
				cout << 0 << endl;
		}
		else
		{
			if (C[Num] == false)
			{
				Sum_C += Num;
				t_C++;
				Sum += N * Num - Sum_R - Num * t_R;
				C[Num] = true;
				cout << Sum << endl;
			}
			else
				cout << 0 << endl;
		}
	}
}