#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int c=0;
    while (n!=0){
        n=n/10;
        r=n%10;
        if (c<r){
            c=r;
        }
    }
    cout<<c;
}