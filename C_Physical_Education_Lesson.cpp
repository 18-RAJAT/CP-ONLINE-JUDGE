#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+15;
int arr[N];
void sol()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    mp.clear();
    int temp=n-k;
    auto recur1=[&](int val)->void
    {
        if(val%2==1)
        {
            return;
        }
        val=(val+2)/2;
        if(k<=val)
        {
            // return;
            mp[val]=1;
        }
    };
    auto recur2=[&](int val)->void
    {
        if(val%2==1)
        {
            return;
        }
        val=(val+2)/2;
        if(k<val)
        {
            // return;
            mp[val]=1;
        }
    };
    for(int i=1;i*i<=temp;++i)
    {
        if(temp%i==0)
        {
            recur1(i);
            recur1(temp/i);
        }
    }
    temp=n+k-2;//for odd numbers
    for(int i=1;i*i<=temp;++i)
    {
        if(temp%i==0)
        {
            recur2(i);
            recur2(temp/i);
        }
    }
    // for(int i=1;i<=n;++i)
    // {
    //     if(mp[i]==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    cout<<mp.size()<<endl;
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