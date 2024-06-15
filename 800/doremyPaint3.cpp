#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()>2)
        {
            cout<<"NO"<<endl;
        }else if(mp.size()==2)
        {
            auto it=mp.begin();
            int first=it->second;
            it++;
            int last =it->second;
            if(abs(first - last)<=1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
       
    }
}