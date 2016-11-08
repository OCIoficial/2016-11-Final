#include <iostream>
using namespace std;

int main(){

	int N, M;

	cin >> N >> M;

	if(N>M) cout << 0 << endl;
	else cout << M-N << endl;

	return 0;
}
