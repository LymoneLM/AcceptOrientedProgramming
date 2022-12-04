#include <bits/stdc++.h>
class sNum
{
public:
	long long Dnum_B, Dnum_D;
	char Dnum[1001] = {'0', '\0'};
	// char Bnum[100001] = {'0', '\0'};
	long long Dlen, Blen;

	long long add()
	{
		Dnum[0]++;
		Dlen = strlen(Dnum);
		for (int i = 0; i < Dlen; i++)
		{
			if (Dnum[i] == '2')
			{
				Dnum[i] = '0';
				Dnum[i + 1]++;
			}
		}
		if (Dnum[Dlen] == ('\0' + 1))
		{
			Dnum[Dlen] = '1';
			Dnum[Dlen + 1] = '\0';
		}
		Dlen = strlen(Dnum);
		/*test
		int x = Dlen;
		std::cout<<"test:";
			while (x--)
			{
				printf("%c", Dnum[x]);
			}
		std::cout<<std::endl;
		 */
		
		
		Dnum_D = 0;
		Dnum_B = 0;
		for (int i = Dlen-1; i >=0 ; i--)
		{
			Dnum_D *= 10;
			Dnum_D += (Dnum[i] - '0');
			Dnum_B *= 2;
			Dnum_B += (Dnum[i] - '0');
		}
		
		//std::cout<<"c1:"<<Dnum_B<<" "<<Dnum_D<<std::endl;
		
		int i = 0;
		while (Dnum_B >= (1 << i++));
		Blen = (i - 1);
		Dnum_D = Dnum_D & ((1 << Blen) - 1);
		
		//std::cout<<"c2:"<<Dnum_B<<" "<<Dnum_D<<std::endl;
		
		return Dnum_D == Dnum_B;
	}
};
int main()
{
	freopen("binary.in","r",stdin);
	freopen("binary.out","w",stdout);
	int n;
	scanf("%d", &n);
	sNum a;
	int i = 0;
	while (true)
	{
		if (a.add())
			i++;
		// else i--;
		if (i== n)
		{
			int x = a.Dlen;
			while (x--)
			{ 
				//std::cout<<"m";
				printf("%c", a.Dnum[x]);
			}
			break;
		}
	}
	return 0;
}
