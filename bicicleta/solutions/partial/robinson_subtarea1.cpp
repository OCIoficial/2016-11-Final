#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;++i)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, Q;
    cin>>n>>Q;

    int g1, g2;
    cin>>g1>>g2;

    rep(q,Q) {
        int p;
        cin>>p;

        if (p <= g2)
            cout<<"2\n";
        else
            cout<<"1\n";
    }

    return 0;
}
