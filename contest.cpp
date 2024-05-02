#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (n == 1) {
            cout << k << endl;
            continue;
        }

        if (n == 2) {
            cout << max(k, x) << endl;
            continue;
        }

        cout << (long long)(k - 1) * (n - 2) + max(k, x) << endl;
    }

    return 0;
}
