#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int d=0;
    int x=n;
    while(n!=0){
        int c=1;
        r=n%10;
        n=n/10;
        for (int i=1;i<=r;i++){
            c=c*i;
        }
         d+=c;
    }
    if(d==x) cout<<"The number "<<x<<" is a strong number";
    else cout<<"The number "<<x<<" is not a strong number";
}