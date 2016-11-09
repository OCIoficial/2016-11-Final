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

        int l = 0, r = n-1;
        while (l < r) {
            int m = (l + r + 1)/2;

            if (p <= g[m])
                l = m;
            else
                r = m-1;
        }

        cout << r+1 <<'\n';
    }

    return 0;
}
