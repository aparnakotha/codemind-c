#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,s;
    int rem=0;
    cin>>n;
    s=n*n;
    while (s!=0){
        r=s%10;
        rem+=r;
        s=s/10;
    }
    if (rem==n){
        cout<<"Neon Number";
    }
    else cout<<"Not Neon Number";
}