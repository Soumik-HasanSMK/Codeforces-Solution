#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        (n % 2 == 0) ? cout << "Sakurako" << endl : cout << "Kosuke" << endl;
    }
    return 0;
}