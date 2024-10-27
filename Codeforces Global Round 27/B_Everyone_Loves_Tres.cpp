#include <iostream>
#include <string>
using namespace std;

string findSmallestNumber(int n)
{
    if (n == 1 || n == 3)
        return "-1";
    if (n == 2)
        return "66";
    if (n == 4)
        return "3366";

    string result = "3";
    if (n % 2 != 0)
    {
        for (int i = 1; i < n - 4; ++i)
        {
            result += "3";
        }
        result += "6366";
    }
    else
    {
        for (int i = 1; i < n - 2; ++i)
        {
            result += "3";
        }
        result += "66";
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << findSmallestNumber(n) << endl;
    }
    return 0;
}
