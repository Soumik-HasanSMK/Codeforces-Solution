#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[10];
        for(int i=0;i<10;i++)
        {
            cin>>s1[i];
        }

        char s2[]="codeforces";
        int n=0;
        for(int i=0;i<10;i++)
        {
            if(s1[i]!=s2[i])
                n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
