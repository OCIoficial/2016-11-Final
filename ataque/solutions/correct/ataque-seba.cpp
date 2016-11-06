#include <iostream>
using namespace std;

int main()
{
	int N,A,D,X,Y;
	N=0;
	X=0;
	Y=0;
	cin >> N;

	for(int i=1;i<=N;i++)
	{
		cin >> A >> D;
		if (A <= D)
		{
			X++;
		}
		if (D < A)
		{
			Y++;
		}
	}

	cout << X << " " << Y;
	cout << endl;
}