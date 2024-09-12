#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="RICK";
   
    for(int i=0; s[i]!='\0';i++)
    {
        cout<<s[i]-'A'+1;
    }
    
    return 0;
}