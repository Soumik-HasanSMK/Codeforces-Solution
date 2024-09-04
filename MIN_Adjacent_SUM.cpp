#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    int r = pq.top();
    pq.pop();
    int s = pq.top();
    cout << r + s << endl;
    return 0;
}