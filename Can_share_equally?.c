#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (n%2==0 and (n>0 or m%2==0)) cout<<"YES";
    else cout<<"NO";
}