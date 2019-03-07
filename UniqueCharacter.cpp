/*Given a big string of characters, we will efficiently find the first unique character in it*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,xx,v;
    cin>>t;
    while(t--)
    {
        string s;
        int a[123];
        for(i=0;i<123;i++) 
        {
            a[i]=0;
        }
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            x=s[i];
            a[x]++;
        }
        for(i=0;i<123;i++)
        {
            if(a[i]==1)
            {
                v=i; 
                break;
            }
        }
        cout<<(char)v<<endl;
    }
}
