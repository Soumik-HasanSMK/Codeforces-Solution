#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Find the maximum element in the array
        long long max_element = -1;
        int r = -1;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > max_element) {
                max_element = a[i];
                r = i;
            }
        }

        // Find the minimum element in the array
        long long min_element = a[0];
        int l = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] < min_element) {
                min_element = a[i];
                l = i;
            }
        }

        // Print the boundaries of the subarray
        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}

