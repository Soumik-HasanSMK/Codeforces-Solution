#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Size of array
        vector<int> arr(n);
        int sum = 0;
        int remainder_count[3] = {0}; // To count elements with remainders 0, 1, and 2
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i]; // Input array elements
            sum += arr[i];
            remainder_count[arr[i] % 3]++;
        }

        int moves = 0;
        int target_remainder = sum % 3;
        // If sum is not divisible by 3, we need to make adjustments
        if (target_remainder != 0)
        {
            // If there are excess elements with the same remainder as the target remainder,
            // we can remove them directly
            if (remainder_count[target_remainder] > 0)
                moves = 1;
            // Otherwise, we need to try to remove one element from each of the other remainders
            else if (remainder_count[3 - target_remainder] > 1)
                moves = 2;
            // If that's not possible, we can remove two elements from any other remainder
            else if (remainder_count[0] > 1)
                moves = 2;
            // If still not possible, then it's not possible to achieve the target remainder
            else
                moves = -1;
        }

        cout << moves << endl; // Output minimum moves
    }
    return 0;
}
