#include<iostream>
#include <vector>
#include<set>
#include<math.h>
#include <utility>
#include <algorithm>


//#include<bits/stdc++.h>
 
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(n)          for (ll i=0;i<n;i++)
#define fr1(n)         for(ll i=1;i<=n;i++)
typedef vector<int> vi;

void solve()
{
int n, m, k;
  cin >> n >> m >> k;
  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  vi b(m);
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0;
  int j = 0;
  int c = 0;
  while (i < n && j < m)
    if (a[i] + k < b[j]) i++;
    else if (a[i] - k > b[j]) j++;
    else { i++; j++; c++; }
  cout << c << endl;
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