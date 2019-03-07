/*Given a big string of characters, we will efficiently find the first unique character in it*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,xx,v,flag;
    cout<<"ENTER THE NUMBER OF TEST CASES:"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"ENTER THE STRING::"<<endl;
        flag=0;
        string s;
        int a[123];
        for(i=0;i<123;i++) //We simply use the concept of Hashing.
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
        v=0;
    }
}
