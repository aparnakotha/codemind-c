#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int x=n;
    int rem=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        rem=rem*10+r;
    }
    if(rem==x) cout<<"True";
    else cout<<"False";
}