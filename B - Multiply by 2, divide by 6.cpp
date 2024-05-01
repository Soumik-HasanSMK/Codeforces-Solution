#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        int count=0;
        cin>>n;
        if(n!=1)
        {
            if(n%6==0)
                n/=6;
            count++;
        }
        else if(n%6!=0)
            n*=2;
            count++;
        }

        }
        else if(n==2)
            count=-1;
        else
            count=0;
        cout<<count<<endl;
    }
    return 0;
}
