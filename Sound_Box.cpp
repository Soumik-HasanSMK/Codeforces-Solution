#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int box=0, pos=0;
    while (pos<n) 
    {
        int s=pos+k;
        while (pos<n && pos<=s)
        {
            pos++;
        }
        box++;
    }
    cout<<box<<endl;
    return 0;
}
