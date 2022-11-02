#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;

    while (n>9){
        int rem=0;
        while (n!=0){
            r=n%10;
            n=n/10;
            rem+=r*r;
        }
        n=rem;
    }
    if (n==1 or n==7) cout<<"True";
    else cout<<"False";
}
    