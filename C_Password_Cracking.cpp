#include<bits/stdc++.h>
using namespace std;
#define int long long
void sol()
{
    int n;cin>>n;
    string str;
    bool ok=1;
    int x=str.size();
    while(x<n)
    {
        bool a,b;
        if(ok==0)
        {
            cout<<"? "<<"1"<<endl;
            cin>>a;
            if(a)str="1"+str;
        }
        else
        {
            str="0"+str;
            continue;
        }
        str.push_back('0');
        cout<<"? "<<str<<endl;
        cin>>a;
        if(!a)
        {
            str.pop_back();str.push_back('1');
            cout<<"? "<<str<<endl;
            cin>>b;
            if(!b)
            {
                ok=0;
                str.pop_back();
            }
        }
    }
    cout<<"! "<<str<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}