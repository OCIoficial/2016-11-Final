#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;++i)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, Q;
    cin>>n>>Q;

    vector<int> g(n);
    rep(i,n) cin>>g[i];

    rep(q,Q) {
        int p;
        cin>>p;

        for (int i=n-1; i>=0; --i) if (p <= g[i]) {
            cout<< i+1 <<'\n';
            break;
        }
    }

    return 0;
}
