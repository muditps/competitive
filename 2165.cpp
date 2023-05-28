#include<iostream>
#include <vector>
#include<set>
#include<math.h>
#include <utility>
// #include<bits/stdc++.h>
 
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(n)          for (ll i=0;i<n;i++)
#define fr1(n)         for(ll i=1;i<=n;i++)

void toh(int n, ll src,ll aux,ll dest)
{
    if(n==1)
    {
        cout<<src<<" "<<dest<<endl;
        return;
    }
    toh(n-1,src,dest,aux);
    cout<<src<<" "<<dest<<endl;
    toh(n-1,aux,src,dest);
}
void solve()
{
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    toh(n,1,2,3);

} 
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
 
	return 0;
}