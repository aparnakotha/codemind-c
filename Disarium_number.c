#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r,t,u;
    int p=1;
    cin>>n;
    int s=0;
    k=n;
    int rem=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        rem=rem*10+r;
    }
    while(rem!=0){
        u=rem%10;
        rem=rem/10;
        t=pow(u,p);
        s+=t;
        p++;
    }
    if (s==k) cout<<"True";
    else cout<<"False";
}