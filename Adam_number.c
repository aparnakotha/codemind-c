#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,r1;
    cin>>n;
    int rem=0;
    int rem1=0;
    int m=n*n;
    while (n!=0){
        r=n%10;
        n=n/10;
        rem=rem*10+r;
    }
    int p=rem*rem;
    while (p!=0){
        r1=p%10;
        p=p/10;
        rem1=rem1*10+r1;
    }
    if (m==rem1) cout<<"True";
    else cout<<"False";
}