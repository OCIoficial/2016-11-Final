#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, f, g, m;

    cin >> n >> f;

    vector<int> gs;
    for (int i = 0; i < n; i++) {
        cin >> g;
        gs.push_back(g);
    }
    int a, k, z;
    for (int i = 0; i < f; i++) {
        cin >> m;
        a = 0;
        z = n;
        for (k = (a + z) / 2; z - a > 1; k = (a + z) / 2) {
            if (gs[k] < m) {
                z = k;
            } else {
                a = k;
            }
        }
        cout << (a + 1) << endl;
    }

    return 0;
}
