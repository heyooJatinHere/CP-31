#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int h=0;
        int dot=0;
        int tot=0;
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                dot++;
                tot++;
            }else{
                dot=0;
            }
            m=max(m,dot);
        }
        if(m>2)
        {
            cout<<2<<endl;
        }else{
            cout<<tot<<endl;
        }
        t--;
    }
}