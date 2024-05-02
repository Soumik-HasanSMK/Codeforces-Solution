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
        long long r,max_element = -1;
        for (int i = n-1; i < n; i--)
            {
                if (a[i] > max_element)
                {
                    max_element = a[i];
                    r = i;
                }
            }
                long long l,min_element=a[0];
        for (int i = 1; i < n; i++)
            {
                if (a[i] < min_element)
                {
                    min_element = a[i];
                    l = i;
                }
            }

        // Print the boundaries of the subarray
        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}
