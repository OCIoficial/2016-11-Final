#include <iostream>
using namespace std;

int main(){

	int N, M;

	cin >> N >> M;

	int P1[N];
	int P2[M];

	for(int i=0;i<N;i++)
		cin >> P1[i];

	for(int i=0;i<M;i++)
		cin >> P2[i];

	int i = 0;

	while(i<M && i<N && P1[i]==P2[i]) i++;  // busca el primer valor donde son diferentes desde la izquierda

	if(i==M) { cout << 0 << endl; return 0;}
	if(i==N) { cout << M-N << endl; return 0;}

	// no se acabó ni el primer ni el segundo string
	// la posicion i es la primera en la que difieren desde la izquierda
	// empieza ahora contando desde atrás

	int j = N-1;
	int k = M-1;
	while(j >= 0 && k >= 0 && P1[j]==P2[k]) { j--; k--; }

	// la posición k es la primera en la que difieren desde la derecha

	cout << k-i+1 << endl;
	return 0;
}