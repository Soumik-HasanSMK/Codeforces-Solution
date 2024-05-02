#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=tolower(s[i]);
            s[0]=toupper(s[0]);
        }
        else if((s[0]>='a'&&s[0]<='z')&&(s[i+1]>='A'&&s[i+1]<='Z'))
        {
            s[i]=tolower(s[i]);
            s[0]=toupper(s[0]);
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            s[0]=toupper(s[0]);
        }
        else
            s[i]=s[i];
    }
    cout<<s;

    return 0;
}
