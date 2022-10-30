#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    int s;
    int rem=1;
    int rem1=0;
    cin>>n;
    while (n!=0){
        r=n%10;
        rem*=r;
        rem1+=r;
        n=n/10;
    }
    s=rem-rem1;
    cout<<s;
}