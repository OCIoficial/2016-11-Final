#include <iostream>
using namespace std;

int main()
{
	int N,M,iN,iM,mark1,mark2,R;
	iN=0;
	iM=0;
	cin >> N >> M;
	int P1[N],P2[M];
	for (int i=0;i<N;i++)
	{
		cin >> P1[i];
	}
	for (int i=0;i<M;i++)
	{
		cin >> P2[i];
	}
	while ( (P1[iN]==P2[iM]) && ((iN<N-1) && (iM<M-1)) )
	{
		iN++;
		iM++;
	}
	if (iM==M-1 && P1[iN]==P2[iM]) //si iM alcanza el final de la segunda palabra
	{
		R=0;
	}
	else
	{
		if (iN==N-1 && P1[iN]==P2[iM])
		{
			R=M-N;
		}
		else
		{
			if (P1[iN]!=P2[iM])
			{
				mark1=iM;
				iN=N-1;
				iM=M-1;
				while (P1[iN]==P2[iM])
				{
					iN--;
					iM--;
				}
				mark2=iM;
				R=(mark2-mark1)+1;
			}
		}
	}
	cout << R;
	cout << endl;
}